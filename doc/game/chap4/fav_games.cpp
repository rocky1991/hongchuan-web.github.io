// maitain a list of favorate games

#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;

int main() {
	string user_action = "";
	vector <string> game_list;
       	string game_title = "";	
	vector <string> :: const_iterator iter;
	vector <string> :: iterator myIter;
	while (user_action != "quit") {
		cout << "Current list of favorate games is: \n";
		for (iter = game_list.begin(); iter != game_list.end(); iter++) {
			cout << *iter << endl;
		}
		cout << "Enter user action: (add/remove/quit) ";
		cin >> user_action;
		if (user_action == "add") {
			cout << "Enter a game title to add:";
			cin >> game_title;
			game_list.push_back(game_title);
		} else if (user_action == "remove") {
			cout << "Enter a game title to remove: ";
			cin >> game_title;
			for (myIter = game_list.begin(); myIter != game_list.end(); myIter++) {
				if (game_title == *myIter) {
					game_list.erase(myIter);
				}
			}
		}
	}
	// display the list of games
	// prompt for adding or removing a game
	
}

