//Customer.cpp
// Group 4 Noah Richardson, Milik Bennett-Spence, Desjah Thompson, Terik Hamilton
// 02/26/20
// create orders for existing customers and allow items to be added as long as they have not surpassed th maxiumum of their reamaining line of credit 
public:
    Customer::Customer()
    {
    std::sting customerNum="";
    std::string customerName="";
    double lineOfCredit=0;
    corperateAddress="";
    }

    Customer::Customer(std::sting c_num, std::string c_name, double c_credit)
    {
    customerNum = c_num;
    customerName = c_name;
    lineOfCredit = c_credit;
    }
    
    Customer::Customer()
    
    std::string getCustomerNum(){return customerNum;}
    std::string getCustomerName(){return customerName;}
    std::double getLineOfCredit(){return lineOfCredit;}

    void std::string setCustomerNum(){return customerNum;}
    void std::string setCustomerName(){return customerName;}
    void std::double setLineOfCredit(){return lineOfCredit;}

    //Receive from file functions
	void Customer::grabcustomer()
	{
        int lineOfCredit;
        std::string customerNum; 
        std::string customerName; 
        std::string street; 
        std::string city; 
        std::string state; 
        std::string zip;
        char c;
        vector<Customer> customers;
        vector<Address> addresses;

        ifstream inFile;
        inFile.open("customers.dat");
        if(inFile.is_open())
        {
            while (!inFile.eof())
            {
                getline(inFile, customerNum, '|');
                getline(inFile, customerName, '|');
                inFile >> lineOfCredit >> c;
                getline(inFile, street, ',');
                getline(inFile, city, ',');
                getline(inFile, state, ',');
                getline(inFile, zip);
                Customer one(customerNum, customerName, lineOfCredit);
                Address two(street, city, state, zip);
                customers.push_back(one);
                addresses.push_back(two);      
            }
        }
	        inFile.close();
	    arrCustomer=customers;
	    arrAddress=addresses;
	}



    std::string Customer::getCustomer()
	{
	    std::string lineOfCredit= (std::string string) lineOfCredit;
	    return customerNum;
	    return customerName;
	    return lineOfCredit;
	}
