#include <ctime>
#include<sstream>
#include “Address.h”
#include “Customer.h”
#include “Product.h”
#include “StringHelper.h”
#include <iomanip>
#include <ifstream>
#include <vector>

using namespace std;

string generateOrderNum();

int main(){
	
  //declaring my variables
  string customerName, customerNum, address;
  double lineOfCredit;
  
  Customer customer1[21]; // array for the customer data 
  ifstream customerFile; 
  customerFile.open("customers.dat"); // customer name file
  // customer1.grabcustomer(); to grab cust info instead? 
  
  // using string helper to parse information
  for(int=0; i<21; i++)
  {
    getline(customerFile, input[i]);
    customerNum=StringHelper::parse(input[i], '|')[0];
    customerName=StringHelper::parse(input[i], '|')[1];
    credit = stod(StringHelper::parse(input [i], '|')[2]);
    address=StringHelper::parse(input[i], '|')[3];
    
    // class set functions in customer.cpp
    customer1[i].setCustomerNum(customerNum);
    customer1[i].setCustomerName(customerName);
    customer1[i].setLineOfCredit();
  }
  
 // This is where the Associate enters their information
 string associateName, name;
  
  
  cout << "Please enter associate name: ";
  cin >> assoicateName;
  cout << "Enter Customers name: ";
  cin >> name;
  
  // searches for the customer information
 
   string arr[21]; // points object to the customer data
  for (int i=0; i<21; i++)
  {
   arr[i]= customer1[i].getCustomerName();
    if (arr[i]==customerName){
      return -1;
    }
    else 
      cout<< "Customer does not exist";
  }
  
  // search for items 
  int stockQuantity, itemNo;
  int choice;
  
  do {
    cout<< "Please enter item number: ";
    cin >> itemNo;
    cout << "Quantity of item? ";
    cin >> stockQuantity;
    cout << " More items?(Yes-1 or no-2) ";
    cin >> choice;
  }while(choice==1);
  
 
  
  
  // make sure the adress ouputs
  string streetAddress, city, state, zipCode;
  
  for(int=0; i<20; i++)
  {
    getline(customerFile, input[i]);
    address=StringHelper::parse(input[i], '|')[3];
     streetAddress=StringHelper::parse(address, ',')[0];
    city =StringHelper::parse(address, ',')[1];
    state=StringHelper::parse(address, ',')[2];
    zipCode=StringHelper::parse(address, ',')[3];
  }
  
  // product search
   Product product1[20];
  product1.getProduct(); // data from the inventory
  string lines[20];
  
  for (int i=0; i<20; i++)
  
	return 0;
}

string generateOrderNum(){
  time_t now = time(0);
  string oNum;
  stringstream strstream;
  strstream << now;
  strstream >> oNum;
  return oNum;
}
