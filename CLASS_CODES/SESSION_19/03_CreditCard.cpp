/* 
    GOAL : Demo class for 50 Class exercise 
    DATE : 08 MARCH 2025
*/

#include <iostream> 
#include <string> 

class CC_Date 
{
    private: 
        int month, year; 
    public: 
        CC_Date(int _month, int _year) 
        {
            this->month = _month; 
            this->year = _year; 
        }

        void show() 
        {
            std::cout << this->month << "/" << this->year << std::endl; 
        }
}; 

class CreditCard 
{
    private: 
        std::string cc_name; 
        std::size_t cc_number; 
        unsigned short cc_cvv; 
        CC_Date valid_thru; 
        CC_Date expiry; 
    public: 
        CreditCard(); 
}; 

