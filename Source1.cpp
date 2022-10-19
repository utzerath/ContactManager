using namespace std;
/*
* Jack Utzerath
* CST-210
* Contact Manager
* 2/08/22
* This is my own work
*/

#include "Contact.h"
#include <fstream>
#include <iostream>


int main() {

	//conctructor
	Contact contact;

	//get input file and output file
	ifstream fin("Text1.txt");
	ofstream fout("text.txt");

	//create vector
	vector<Contact> myContacts;

	//output vector size
	cout << myContacts.size() << endl;
	

	//loadContact
	contact.loadContact(fin, myContacts);
	cout << myContacts.size() << endl;


	//For loop to add contact
	for (int i = 0; i < 2; i++)
	{
		contact.addContact(myContacts);
	}

	//save the contact
	contact.saveContact(fout, myContacts);


	//close
	fin.close();
	fout.close();


	return 0;

}