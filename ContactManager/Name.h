#pragma once
/*
* Jack Utzerath
* CST-210
* Contact Manager
* 2/08/22
* This is my own work
*/

#ifndef NAME_H
#define NAME_H

#include <string> 
#include <iostream>
using namespace std;

class Name {
private: 
	//attributes
	string f_name, l_name;

public: 
	//constructors
	Name();
	Name(string, string);
	Name(const Name& n);

	//getters
	string getName() const { return f_name + ", " + l_name; }
	string getLastName() const { return l_name; }
	string getFirstName() const { return f_name; }

	//setter 
	void setFirstName(string);
	void setLastName(string);

	friend istream& operator >>(istream& in, Name&);
};

#endif