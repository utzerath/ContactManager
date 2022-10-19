/*
* Jack Utzerath
* CST-210
* Contact Manager
* 2/08/22
* This is my own work
*/

#include "Contact.h"
#include <vector>



Contact::Contact() {

	this->name = Name();
	this->address = Address();
	this->phone = "xxx-xxx-xxx";
	this->identifier = -1;
	this->totalCt = 0;
}
Contact::Contact(string l_name, string f_name, string streetAddress, string state, string zip, string phone) {
	
	this->name = Name(l_name, f_name);
	this->address = Address(streetAddress, state, zip);
	this->phone = phone;
	this->identifier = totalCt;
	this->totalCt = 0;

}
Contact::Contact(const Contact& c) {
	this->name = c.name;
	this->address = c.address;
	this->phone = c.phone;
	this->identifier = c.identifier;

	
}

string Contact::getName()const{
	return  name.getName();
}

string Contact::getAddress() {
	return address.getAddress();
}

string Contact::getPhone() {
	return phone;
}

void Contact::setName(string lname, string fname) {
	this->name = Name(fname, lname);
	
}

void Contact::setAddress(string streetAddress, string state, string zip) {
	this->address = Address(streetAddress, state, zip);


}
void Contact::setPhone(string phone) {
	this->phone = phone;
}
ostream& operator<< (ostream& out, const Contact& rhs)
{
	//Output all of the attributes
	out << rhs.identifier << "\n" << rhs.getName() << "\n"
		<< rhs.address.getAddress() << rhs.phone << "\n";
	return out;
}

istream& operator>>(istream& in, Contact& rhs) {

	//in stream the name address phone and identifier
	in >> rhs.name;
	in >> rhs.address;
	getline(in, rhs.phone);
	rhs.getIdentifier();
	
	return in;
}

void Contact::addContact(vector<Contact> & lst)
{
	string first, last, street, state, zip, phone;
	//get contact information from user
	cout << "Enter the following information for you contact\n";
	cout << "First name: ";
	getline(cin, first);
	cout << "Last Name: ";
	getline(cin, last);
	cout << "Street Address: ";
	getline(cin, last);
	cout << "State: ";
	getline(cin, last);
	cout << "Zip code: ";
	getline(cin, last);
	cout << "Phone number ";
	getline(cin, last);
}
void Contact::saveContact(ostream& out, const vector<Contact> & lst)
{
	//save Contact
	for (int i = 0; i < lst.size(); i++)
	{
		out << lst[i] << endl;
	}

}
void Contact::loadContact(istream& in, vector<Contact>& lst) {

	//Load contact
	if (!in) {
		cout << "file not found" << endl;
		exit(35);
	}

	Contact c;
	while (in >> c)
	{
		lst.push_back(c);
		cout << c << endl;
	}
}



int Contact::getIdentifier() {
	//get identifier 
	totalCt++;
	identifier = totalCt;
	return totalCt;
}