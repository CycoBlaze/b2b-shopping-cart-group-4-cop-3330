//Address.h
// Group 4 Noah Richardson, Milik Bennett-Spence, Desjah Thompson, Terik Hamilton
// 02/26/20
// create orders for existing customers and allow items to be added as long as they have not surpassed th maxiumum of their reamaining line of credit 
#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>


class Address
{
std::string streetaddress;
std::string zipcode;
std::string city;
std::string state;


Public:

Address()
Address(std::string);
Address(std::string, std::string);
Address(std::string, std::string, std::string);	
Address(std::string, std::string, std::string, std::string);	
~Address();

void setStreetAddress(std::string);
void setCity(std::string);
void setState(std::string); 
void settZipCode(std::string);
void print()
string getStreetAddress();
string getCity();
string getState(); 
string getZipCode();
};
#endif
