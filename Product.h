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
			
	/**************************************************************
	 *                        getItemNo                           *
	 *                                                            *
	 * Passed   : 0 argument                                      *
	 * Purpose  : Get item Number                                 *
	 * Returns  : Item Number                                     *
	 **************************************************************/
			int getItemNo();
    
        /**************************************************************
	 *                        getdescription                      *
	 *                                                            *
	 * Passed   : 0 arguments:                                    *
	 * Purpose  : Get item description                            *
	 * Returns  : Item description                                *
	 **************************************************************/
			std::string getDescription();
    
        /**************************************************************
	 *                        getStockQuantity                    *
	 *                                                            *
	 * Passed   : 0 arguments:                                    *
	 * Purpose  : Get stock quantity                              *
	 * Returns  : stock quantity                                  *
	 **************************************************************/
			double getStockQuantity();
    
        /**************************************************************
	 *                   getPrice                                 *
	 *                                                            *
	 * Passed   : 0 arguments:                                    *
	 * Purpose  : Get price                                       *
	 * Returns  : Price                                           *
	 **************************************************************/
            int getPrice();
    
	/**************************************************************
	 *                   setItemNo                                *
	 *                                                            *
	 * Passed   : 1 arguments: a int                              *
	 * Purpose  : Set the item number                             *
	 * Returns  : Integer                                         *
	 **************************************************************/
			void setItemNo(int);
    
        /**************************************************************
	 *                  setDescription                            *
	 *                                                            *
	 * Passed   : 1 arguments: a string                           *
	 * Purpose  : Set the description                             *
	 * Returns  : String                                          *
	 **************************************************************/
            void setDescription(std::string);
    
        /**************************************************************
	 *                  setStockQuantity                          *
	 *                                                            *
	 * Passed   : 1 arguments: a integer                          *
	 * Purpose  : Set the stock quantity                          *
	 * Returns  : Integer                                         *
	 **************************************************************/
            void setStockQuantity(int);
    
        /**************************************************************
	 *                          setPrice                          *
	 *                                                            *
	 * Passed   : 1 arguments: a double                           *
	 * Purpose  : Set the price                                   *
	 * Returns  : Double                                          *
	 **************************************************************/
            void setPrice(double);

    
         /*************************************************************
	 *                          getProduct                        *
	 *                                                            *
	 * Passed   : 0 arguments                                     *
	 * Purpose  : Read from the inventory.dat                     *
	 * Returns  : Objects                                         *
	 **************************************************************/
            void getProduct();
	
};
#endif
