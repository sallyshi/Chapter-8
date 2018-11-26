#include <iostream>
#include <string>

#include "ContactNode.h"
using namespace std;

int main() {
	string name1;
	string name2;
	string name3;
	string phone1;
	string phone2;
	string phone3;

cout << "Person 1" << endl;	
cout << "Enter name:" << endl;
getline(cin, name1);
cout << "Enter phone number:" << endl;
getline(cin, phone1);
ContactNode firstContact(name1, phone1);

cout << "You entered: " << firstContact.GetName() << endl;


}