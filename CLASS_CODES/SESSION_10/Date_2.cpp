/*
    GOAL : showing existence of 'this' parameter practically using pointers to class  
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
            cout << "***** ENTER Date::show() ***** " << endl; 
            cout << "Address of object used for making current call : " << this << endl; 
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
            cout << "***** LEAVE Date::show() *****" << endl; 
        }
}; 

int main(void) 
{
    // Defining three local objects of class Date 
    Date d1; 
    Date d2; 
    Date d3; 

    // Define three pointers to class Date 
    Date* pDate1 = 0;   // pDate1 is a pointer to class Date 
    Date* pDate2 = 0;   // pDate2 is a pointer to class Date 
    Date* pDate3 = 0;   // pDate3 is a pointer to class Date 

    // set pointers to addresses of objects 
    pDate1 = &d1; 
    pDate2 = &d2; 
    pDate3 = &d3; 

    // Setting day month year of d1 
    pDate1->day = 2; 
    pDate1->month = 2; 
    pDate1->year = 2025; 

    // setting day month year of d2 
    pDate2->day = 5; 
    pDate2->month = 6; 
    pDate2->year = 1990; 

    // setting day month year of d3 
    pDate3->day = 11; 
    pDate3->month = 12; 
    pDate3->year = 2028; 

    cout << "main() : Making use of pointer pDate1 to make call to Date::show() " << endl; 
    cout << "main() : Address of object 'd1' is : " << pDate1 << endl; 
    pDate1->show();  // == Date::show(pDate1); // formal parameter will be this pointer 

    cout << "main() : Making use of pointer pDate2 to call Date::show() " << endl; 
    cout << "main() : Address of object 'd2' is " << pDate2 << endl; 
    pDate2->show(); // == Date::show(pDate2);    // formal parameter will be this pointer 

    cout << "main() : making use of pointer pDate3 to make call to Date::show() " << endl; 
    cout << "main() : Address of object 'd3' is " << pDate3 << endl; 
    pDate3->show(); // == Date::show(pDate3); // formal parameter will be this pointer 

    return 0; 
}

// pDate1->show() == Date::show(pDate1); 

// Date* pDate1 
// Date* this 

// typeof(pDate1) == typeof(this) 

// d1.show(); 
// this = &d1 

// pDate1 = &d1 
// this = pDate1 

