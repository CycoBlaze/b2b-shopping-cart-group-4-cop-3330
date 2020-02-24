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

string getStreetAddress();
string getCity();
string getState(); 
string getZipCode();
};
#endif
