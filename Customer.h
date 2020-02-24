#include <iostream>
#include <string>



class Address
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
