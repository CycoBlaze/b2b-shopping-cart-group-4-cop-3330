#include "Product.h"
#include "inventory.dat"
#include <iomanip>
using namespace std;

//defalut constructor
Product::Product(){
    setItemNo(0);
    setDescription("");
    setPrice(0);
    setStockQuantity(0);
}


//constructor with 4 parameters
Product::Product(int i, string d, double p, int s)
{
    itemNo = i;
    description = d;
    price = p;
    stockQuantity = s;
}
//get item number
            int Product::getItemNo(){return ItemNo;}
//get item description
			string Product::getDescription(){return Description;}
//get stock quantity
			double Product::getStockQuantity(){return stockQuantity;}
//get price of item
            int Product::getPrice(){return price;}
	
			void Product::setItemNo(int i){itemNo = i;}
//set the description
            void Product::setDescription(string d){description = d};
//set stock quantity
            void Product::setStockQuantity(double p){price = p;}
//set price of items
            void Product::setPrice(int s){stockQuantity = s;}
//prints the items
void Product::prodprint()
{
   int total = price * stockQuantity;
    cout << "--------------------------------------------" << endl;
    cout << "Item No" << setw(18) << "Description" << setw(10) << "Qty" << setw(9) << "Total" << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout<< setw(4) << itemNo << "        " <<setw(13) << description << "        " <<  setw(3) << stockQuantity << "     " << setw(7) << setprecision(2) << showpoint << fixed << total << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total" << setw(38) << setprecision(2) << fixed << showpoint <<  total << endl;
    cout << "--------------------------------------------" << endl;
}

//reads items from file
void Product::getProduct(){
ifstream inFile;
        inFile.open("inventory.dat");
        if(inFile.is_open())
        {
            while (!inFile.eof())
            {
                getline(inFile, itemNo, ',');
                getline(inFile, description, ',');
                getline(inFile, price, ',');
                getline(inFile, stockQuantity, ',');

                Product prod(itemNo, description,price,stockQuantity)     
            }
        }
            inF.close();
}
