/*
* Jack Utzerath
* CST-210
* Contact Manager
* 2/08/22
* This is my own work
*/

#include "Address.h"



Address::Address() 
{

	streetAddress = "";
	state = "";
	zip = "";

 }
Address::Address(string streetAddress, string state, string zip)
{
	this->streetAddress = streetAddress;
	this->state = state;
	this->zip = zip;
}
void Address::setStreetAddress(string a)
{
	this-> streetAddress = a;
}
void Address::setState(string b)
{
	this-> state = b;

}void Address::setZip(string c)
{
	this->zip = c;
}

ostream& operator <<(ostream&, const Address);

istream& operator >>(istream& in, Address& rhs)
{
	getline(in, rhs.streetAddress);
	getline(in, rhs.state);
	getline(in, rhs.zip);
	return in;
}