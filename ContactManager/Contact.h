#pragma once
#include <string>
#include "Name.h"
#include "Address.h"
#include <vector>
#include <iostream>

using namespace std;
/*
* Jack Utzerath
* CST-210
* Contact Manager
* 2/08/22
* This is my own work
*/

class Contact {
private : 

	//Attratibutes
	int identifier;
	//update identifier if object doesn't have one
	string phone;
	Address address;
	Name name;
	int totalCt;

public :
	
	//Constructor 
	Contact();
	Contact(string, string, string, string, string, string);
	Contact(const Contact& c);


	//Getters
	string getName()const;
	string getAddress();
	string getPhone() ;

	//setters
	void setPhone(string phone);
	int getIdentifier();
	void setName(string, string);
	void setAddress(string, string, string);

	
	void addContact(vector<Contact>& lst);
	void saveContact(ostream& out, const vector<Contact>& lst);
	void loadContact(istream& in, vector<Contact>& lst);

	friend ostream& operator <<(ostream&,const Contact&);
	friend istream& operator >>(istream&, Contact&);
	

};
