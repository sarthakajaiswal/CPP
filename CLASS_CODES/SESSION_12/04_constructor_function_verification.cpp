#include <iostream> 

using std::cout; 
using std::endl; 

class Date 
{
    private: 
        int day; 
        int month; 
        int year; 
    
    public: 
        // CONSTRUCTOR FUNCTION 
        Date(int init_day, int init_month, int init_year) 
        {
            cout << "***** Date constructor enter *****" << endl; 
            cout << "Address of newly allocated object : " << this << endl; 
            this->day = init_day; 
            this->month = init_month; 
            this->year = init_year; 
            cout << "***** Date Constructor Leave *****" << endl; 
        }

        void show() 
        {
            cout << "***** Date::show() ENTER *****" << endl; 
            cout << "Address of object whose members must be shown:" << this << endl; 
            cout << day << "/" << month << "/" << year << endl; 
            cout << "***** Date::show() LEAVE *****" << endl; 
        }
}; 

int main(void) 
{
    // Memory allocation of 12 bytes of stack frame of main() + call to constructor 
    Date myBirthDate(20, 7, 1986); 

    // Memory allocation of 12 bytes of stack frame of main() + call to constructor 
    Date cpaBirthDate(1, 12, 2009); 

    cout << "main() : address of myBirthDate : " << &myBirthDate << endl; 
    cout << "main() : address of cpaBirthDate: " << &cpaBirthDate << endl; 

    myBirthDate.show(); 
    cpaBirthDate.show();
    
    return 0; 
}
