#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    
    return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 

    return document[m-1][k-1];
}

char*** kth_paragraph(char**** document, int k) {

    return document[k-1];
}

char**** get_document(char* text) {
    char **** a_document = (char ****) malloc(sizeof(char***));
    * a_document = (char ***) malloc(sizeof(char**));
    
    ** a_document = (char **) malloc(sizeof(char *));
    *** a_document = (char *) malloc(sizeof(char));
    int i = 0;
    int para_in_doc = 0;
    int sent_in_para = 0;
    int word_in_sent = 0;
    // int ch_in_word = 0;
    int word_start = 0;

    while(*(text + i) != 0){
        printf("%c", *(text +i));
        if (*(text + i) == ' '){
            // re-alloc memory for saving current word
            *(text + i) = 0;
            a_document[para_in_doc][sent_in_para][word_in_sent] = (char *)realloc(a_document[para_in_doc][sent_in_para][word_in_sent], (i - word_start + 1) * sizeof(char));
            // save the current word
            a_document[para_in_doc][sent_in_para][word_in_sent] = &(text[word_start]);
            
            // allocate memory for next word
            a_document[para_in_doc][sent_in_para][++word_in_sent] = (char *)malloc(sizeof(char));
             
            word_start = i + 1;
        }
        else if (*(text + i) == '.'){
            //re-alloc memory for saving current word
            *(text + i) = 0;
            a_document[para_in_doc][sent_in_para][word_in_sent] = (char *) realloc(a_document[para_in_doc][sent_in_para][word_in_sent], (i - word_start + 1) * sizeof(char));
            //save the current word
            a_document[para_in_doc][sent_in_para][word_in_sent] = &(text[word_start]);
            word_in_sent = 0;
            //allocate memory for new sentence, realloc parah
            sent_in_para += 1;
            a_document[para_in_doc] = (char ***) realloc(a_document[para_in_doc],(sent_in_para+ 1) * sizeof(char**));
            a_document[para_in_doc][sent_in_para] = (char **) malloc(sizeof(char *));
            
            //allocate memory for new word
            a_document[para_in_doc][sent_in_para][word_in_sent] = (char *) malloc(sizeof(char));
            
        }
        else if (*(text + i) == '\n'){
            //allocate memory for saving next para, and realloc for doc
            para_in_doc += 1;
            a_document = (char ****) realloc(a_document, (para_in_doc + 1) * sizeof(char ***));
            a_document[para_in_doc] = (char ***) malloc(sizeof(char **));
            sent_in_para = 0;
            word_in_sent = 0;
            //allocate memory for saving new sent
            a_document[para_in_doc][sent_in_para] = (char **) malloc(sizeof(char *));
            a_document[para_in_doc][sent_in_para][word_in_sent] = (char *) malloc(sizeof(char));
            //allocate memory for saving new word
        }
        
        i++;
    }
    printf("\n");
    
    return a_document;
}



char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
} 

void print_paragraph(char*** paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main() 
{
	char* text = get_input_text();
	char**** document = get_document(text);

//    	int q;
//    	scanf("%d", &q);

	char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, 1, 1, 1);
    print_word(word);
    char ** sentence = kth_sentence_in_mth_paragraph(document, 1,1);
    printf("before paragh\n");
    char *** paragraph =  kth_paragraph(document, 1);
    printf("before print sentence\n");
    print_sentence(sentence);
    printf("after print sentence\n");
    print_paragraph(paragraph);

//    while (q--) {
//        int type;
//        scanf("%d", &type);
//
//        if (type == 3){
//            int k, m, n;
//            scanf("%d %d %d", &k, &m, &n);
//            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
//            print_word(word);
//        }
//
//        else if (type == 2){
//            int k, m;
//            scanf("%d %d", &k, &m);
//            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
//            print_sentence(sentence);
//        }
//
//        else{
//            int k;
//            scanf("%d", &k);
//            char*** paragraph = kth_paragraph(document, k);
//            print_paragraph(paragraph);
//        }
//        printf("\n");
//    }
    return 0;     
}
