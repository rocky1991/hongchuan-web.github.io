#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector <string> words;
	for(string temp; cin >> temp;)
		words.push_back(temp);
	cout << "Number of words: " << words.size() << '\n';
	sort(words.begin(), words.end());
	for(int i = 0; i < words.size(); ++i){
		cout << "words[" << i << "] is " << words[i]
			<< ", and words[" << i -1 << "] is " << words[i-1] << endl;
		if (i == 0|| words[i-1] != words[i])
			cout << words[i] << '\n';
	}
	return 0;
}
