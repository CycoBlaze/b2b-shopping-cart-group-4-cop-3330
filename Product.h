#include <string>
#ifndef PRODUCT_H
#define PRODUCT_H

class Product{
	
		std::string description;
		double price;
		int stockQuantity;
        int itemNo;
	
		public:
			Product();
			Product(int,std::string,double,int);
			
			
			int getItemNo();
			std::string getDescription();
			double getStockQuantity();
            int getPrice();
	
			void setItemNo(int);
            void setDescription(std::string);
            void setStockQuantity(int);
            void setPrice(double);
	

	
};
#endif