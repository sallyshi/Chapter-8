#include <iostream>
#include <string>
#include <vector>

#include "ContactNode.h"
using namespace std;

int main() {

	const int NUM_CONTACTS = 3;
	vector<string> names(NUM_CONTACTS);
	vector<string> phones(NUM_CONTACTS);

for (int i = 0; i < NUM_CONTACTS; i++) {
	cout << "Person " << i+1 << endl;

	cout << "Enter name:" << endl;
	getline(cin, names.at(i));

	cout << "Enter phone number:" << endl;
	getline(cin, phones.at(i));

	cout << "You entered: " << names.at(i) << ", " << phones.at(i) << endl;
	cout << endl;
}

	// Create ContactNode object pointers
	ContactNode* headObj = nullptr;
	ContactNode* firstContact = nullptr;
	ContactNode* secondContact = nullptr;
	ContactNode* thirdContact = nullptr;
	ContactNode* currObj = nullptr;

	// Front of nodes list
	headObj = new ContactNode("","");

	// Insert nodes
	firstContact = new ContactNode(names.at(0), phones.at(0));
	headObj->InsertAfter(firstContact);

	secondContact = new ContactNode(names.at(1), phones.at(1));
	firstContact->InsertAfter(secondContact);

	thirdContact = new ContactNode(names.at(2), phones.at(2));
	secondContact->InsertAfter(thirdContact);

	// Print linked list
	cout << "CONTACT LIST" << endl;
	currObj = firstContact;
	while (currObj != nullptr) {
		currObj->PrintContactNode();
		cout << endl;
		currObj = currObj->GetNext();
	}
}