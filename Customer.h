//Customer.h
// Group 4 Noah Richardson, Milik Bennett-Spence, Desjah Thompson, Terik Hamilton
// 02/26/20
// create orders for existing customers and allow items to be added as long as they have not surpassed th maxiumum of their reamaining line of credit 
#include <iostream>
#include <string>



class Customer
{
    std::string customerNum;
    std::string customerName;
    double lineOfCredit;
    Address * corperateAddress;

    
    public:
        Customer()
        Customer(std::sting, std::string, double)
        
        //Receive from file Function
	    void grabcustomer();
         
        //Print Function
	    std::string getCustomer();
         
        //Class vectors
	    std::vector<Customer> cust;
	    std::vector<Address> addy;
         
        std::string setCustomerNum(std::string);
        std::string setCustomerName(std::string);
        double setLineOfCredit(double);
        
        
        std::string getCustomerNum();
        std::string getCustomerName();
        double getLineOfCredit();
};
