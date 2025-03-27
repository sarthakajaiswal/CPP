/*
    GOAL : showing existence of 'this' parameter practically using objects 
    DATE : 
*/

#include <iostream> 

using std::cout; 
using std::endl; // use this for '\n' 

class Date 
{
    public: 
        int day; 
        int month; 
        int year; 

        void show() 
        {
            cout << "**** Enter Date::show() *****" << endl; 
            cout << "Address of object used for making current call : " << this << endl; 
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
            cout << "***** Leave Date::show() *****" << endl; 
        }
}; 

int main(void) 
{
    Date d1; 
    Date d2; 
    Date d3; 

    // Setting day month year of d1 
    d1.day = 2; 
    d1.month = 2; 
    d1.year = 2025; 

    // setting day month year of d2 
    d2.day = 5; 
    d2.month = 6; 
    d2.year = 1990; 

    // setting day month year of d3 
    d3.day = 11; 
    d3.month = 12; 
    d3.year = 2028; 

    cout << "main() : making use of object 'd1' to make call to Date::show() " << endl; 
    cout << "main() : Address of object 'd1' is : " << &d1 << endl; 
    d1.show(); // == Date::show(&d1); // formal parameter will be 'this' pointer 

    cout << "main() : making use of d2 object to call Date::show() " << endl; 
    cout << "main() : address of object 'd2' is : " << &d2 << endl; 
    d2.show();  // == Date::show(&d2) // formal parameter will be 'this' pointer 

    cout << "main() : making use of 'd3' to call Date::show() " << endl; 
    cout << "main() : address of object 'd2' is : " << &d2 << endl; 
    d2.show(); // == Date::show(&d3) // formal parameter will be 'this' pointer 

    return 0; 
}

