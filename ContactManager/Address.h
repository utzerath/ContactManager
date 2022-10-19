#pragma once

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string> 
#include <iostream>
using namespace std;

class Address {
private:
	string streetAddress, state, zip;

public:

	//constructor
	Address();
	Address(string, string, string);

	//getters
	string getAddress() const { return streetAddress + ", " + state + ", " + zip + "\n"; }
	string getStreetAddress() const {return streetAddress; }
	string getState() const {return state; }
	string getZip() const {return zip; }

	//setters
	void setStreetAddress(string);
	void setState(string);
	void setZip(string);

	//istream 
	friend istream& operator >>(istream&, Address&);
};

#endif