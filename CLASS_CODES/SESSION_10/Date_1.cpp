/* 
    GOAL    : 'this' pointer practical proof 
    AUTHOR  : Sarthak A. Jaiswal 
    DATE    : 21 FEB 2025 
*/

#include <iostream> 

using std::cout; 
using std::endl; 

class Date 
{
    public: 
        int day; 
        int month; 
        int year; 

        void show() 
        {
            cout << "***** Enter Date::show() *****" << endl; 
            cout << "Address of object used for making the current call : " << this << endl; 
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
            cout << "***** LEAVE Date::show() ******" << endl; 
        }
}; 

int main(void) 
{
    Date d1; 
    Date d2; 
    Date d3; 

    // setting day month year of d1 
    d1.day = 2; 
    d1.month = 2; 
    d1.year = 2025; 

    // setting day month year of d2 
    d2.day = 5; 
    d2.month = 6; 
    d2.year = 1976; 

    // setting day month year of d3 
    d3.day = 11; 
    d3.month = 12; 
    d3.year = 2050; 

    cout << "main() : Making use of object d1 to call Date::show()" << endl; 
    cout << "main() : Address of object d1 : " << &d1 << endl; 
    d1.show(); // == Date::show(&d1) - formal parameter will be this pointer 

    cout << endl; 
    cout << "main() : making use of object d2 to make call to Date::show() " << endl ; 
    cout << "main() : address of object d2 : " << &d2 << endl; 
    d2.show(); // == Date::show(&d2) - formal parameter will be this pointer  

    cout << endl; 
    cout << "main() : making use of object d3 to make call to Date::show() " << endl; 
    cout << "main() : address of object d3 : " << &d3 << endl; 
    d3.show(); // == Date::show(&d3) - formal parameter will be this pointer 

    return 0; 
} 

