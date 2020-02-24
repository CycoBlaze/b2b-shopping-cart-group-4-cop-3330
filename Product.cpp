#include "Product.h"
#include <iomanip>
using namespace std;

Product::Product(){
    setItemNo(0);
    setDescription("");
    setPrice(0);
    setStockQuantity(0);
}

Product::Product(int i, string d, double p, int s)
{
    itemNo = i;
    description = d;
    price = p;
    stockQuantity = s;
}

            int Product::getItemNo(){return ItemNo;}
			string Product::getDescription(){return Description;}
			double Product::getStockQuantity(){return stockQuantity;}
            int Product::getPrice(){return price;}
	
			void Product::setItemNo(int i){itemNo = i;}
            void Product::setDescription(string d){description = d};
            void Product::setStockQuantity(double p){price = p;}
            void Product::setPrice(int s){stockQuantity = s;}
void Product::print()
{
   int total = price * stockQuantity;
     cout << setfill (" ");
    cout<< setw(4) << itemNo << "        " <<setw(13) << description << "        " <<  setw(3) << stockQuantity << "     " << setw(7) << total;
}