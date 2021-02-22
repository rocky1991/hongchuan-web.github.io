#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Nameval Nameval;

struct Nameval{
	char *name;
	int value;
	Nameval* next;
};

Nameval* addfront(Nameval *listp, Nameval *newp) {
	newp->next = listp;
	return newp;
}

Nameval *addend(Nameval *listp, Nameval *newp) {
	Nameval *p;
	if (listp == NULL) {
		return newp;
	} 
	for (p = listp; p->next != NULL; p = p->next) {
		
	};
	p->next = newp;
	return listp;
}

void *emalloc(size_t n) {
	void *p;
	p = malloc(n);
	if (NULL == p) {
		fprintf(stderr, "emalloc: malloc of %lu bytes failed.\n", n);
		exit(2);
	}
	return p;
}

Nameval *new_item(char *name, int value) {
	Nameval *newp;
	newp =(Nameval *)  emalloc(sizeof(Nameval));
	newp->name = name;
	newp-> value = value;
	newp->next = NULL;
	return newp;

}
void apply(Nameval *listp, void (*fn) (Nameval *, void*), void *arg) {
	for (; listp != NULL; listp = listp->next) {
		(*fn)(listp, arg);
	}
}

void inccounter(Nameval *p, void *arg) {
	int *ip;
	ip = (int *) arg;
	(*ip)++;
}
void printnv(Nameval *p, void *arg) {
	char *fmt = (char *) arg;
	printf(fmt, p->name, p->value);
}

Nameval *delitem(Nameval *listp, char *name) {
	Nameval *p, *prev;
	prev = NULL;
	for (p = listp; p != NULL; p = p->next) {
		if (strcmp(name, p->name) == 0) {
			if (NULL == prev) {
				listp = p->next;
			} else {
				prev->next = p->next;
			}
			free(p);
			return listp;
		}
		prev = p;
	}
	fprintf(stderr, "delitem: %s not found in list.", name);


	return NULL;
}

void freeall(Nameval *listp) {
	Nameval *next;
	for (; listp != NULL; listp = next) {
		next = listp->next;
		free(listp);
	}

}
int main(void) {
	
	Nameval *nvlist = NULL;
	nvlist = addfront(nvlist, new_item("travis", 0x01));
	nvlist = addend(nvlist, new_item("benjamin", 0x02));
	nvlist = addfront(nvlist, new_item("joe",0x03));
	nvlist = addend(nvlist, new_item("mary", 0x04));

	int n;
	n = 0;
	apply(nvlist, inccounter, &n);
	printf("%d elements in the list:\n", n);
	apply(nvlist, printnv, " - %s (%x)\n");

	nvlist = delitem(nvlist, "joe");

	n = 0;
	apply(nvlist, inccounter, &n);
	printf("%d elements in the list:\n", n);
	apply(nvlist, printnv, " - %s (%x) \n");

	freeall(nvlist);

	return 0;
}
