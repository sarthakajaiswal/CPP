/* 
    GOAL : to prove presence of 'this' pointer using pointer to class 
    Date : 21 FEB 2025 
*/

#include <iostream> 

using std::endl; 
using std::cout; 

class Date 
{
    public: 
        int day; 
        int month; 
        int year; 

        void show() 
        {
            cout << "***** ENTER Date::show() ****" << endl; 
            cout << "Address of object used for making current call : " << this << endl; 
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
            cout << "**** LEAVE Date::show() ****" << endl; 
        } 
}; 

int main(void) 
{
    // defining three local objects of class Date 
    Date d1; 
    Date d2; 
    Date d3; 

    // Define three pointers to class Date 
    Date* pDate1 = 0; // pDate1 is a pointer to class Date  
    Date* pDate2 = 0; 
    Date* pDate3 = 0; 

    // set pointers to addresses 
    pDate1 = &d1; 
    pDate2 = &d2; 
    pDate3 = &d3; 

    // setting day month year of d1 
    pDate1->day = 1; 
    pDate1->month = 1; 
    pDate1->year = 1970; 

    // setting day month year of d2 
    pDate2->day = 10; 
    pDate2->month = 10; 
    pDate2->year = 2000; 

    // setting day month year of d3 
    pDate3->day = 1; 
    pDate3->month = 2; 
    pDate3->year = 2025; 

    cout << "main() : Making use of pointer pDate1 to call Date::show()" << endl; 
    cout << "main() : Address of object 'd1' = " << pDate1 << endl; 
    pDate1->show(); // Date::show(pDate1); - formall parameter is 'this' pointer 

    cout << "main() : making use of pointer pDate2 to call Date::show()" << endl; 
    cout << "main() : address of object 'd2' = " << pDate2 << endl; 
    pDate2->show(); // Date::show(pDate2); - formal paameter is this pointer 

    cout << "main() : making use of pointer pDate3 to call Date::show()" << endl; 
    cout << "main() : address of object 'd3' = " << pDate3 << endl; 
    pDate3->show(); // Date::show(pDate3) - formal parameter is 'this' pointer 

    return 0; 
} 

