// Hero's Inventory
// Demonstrates arrays

#include <iostream>
#include <string>

using namespace std;

int main() {
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int num_items = 0;
	inventory[num_items++] = "sword";
	inventory[num_items++] = "armor";
	inventory[num_items++] = "shield";

	cout << "Your items: \n";
	for (int i = 0; i < num_items; i++) {
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYou find a healing potion";

	if (num_items < MAX_ITEMS) {
		inventory[num_items++] = "healing potion";
	} else {
		cout << "You have too many item and can't carry another";
	}
	cout << "\nYou items: \n";
	for (int i = 0; i < num_items; i++) {
		cout << inventory[i] << endl;
	}
	return 0;
}