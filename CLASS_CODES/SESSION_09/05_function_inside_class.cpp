/*
    GOAL :  1) Demostration of Qualified Access and non-qualified access 
            2) To understand the concept behind emergence of 'this' keyword 
    DATE : 20 FEB 2025 
*/

#include <iostream> 

using std::cout; 

// stand-alone function / global function / c-like function 
int compute(int x, int y); 

class Date 
{
    public: 
        int day; 
        int month; 
        int year; 

        void show(void) 
        {
            cout << day << "/" << month << "/" << year << "\n"; 
        }

        void show(Date* pDate) 
        {
            cout << pDate->day << "/" << pDate->month << "/" pDate->year << "\n"; 
        }

        // EVERY FUNCTION WRITTEN INSIDE CLASS DATE 
        // EXIST TO PROCESS OBJECT OF CLASS DATE

        // EVERY SUCH FUNCTION MUST ACCEPT ADDRESS OF DATE OBJECT 
        // TO UNDERSTAND WHICH DAte OBJECT TO PROCESS IN THE CURRENT CALL? 
}; 

// let C be any class 
// let f() be any function that we want to define in class 

class C 
{
    public: 
        void f(C* pC, /* optional other params... */ ) 
        {
        
        } 

        void f() // 'C* this' is automatically added 
        {
            
        } 
}; 

int main(void) 
{
    int result; 

    result = compute(10, 5); 

    Date myBirthDate; 
    myBirthDate.day = 20; 
    myBirthDate.month = 7; 
    myBirthDate.year = 1986; 

    Date::show(&myBirtDate); 
}

int compute(int x, int y) 
{
    return (x+y) * (x-y); 
}

//////////////////////////////////////////////

class Date 
{
    public : 
        int day; 
        int month; 
        int year; 

        void show() 
        {
            cout << this->day << "/" << this->month << "/" << this->year << "\n"; 
        }
}; 

int main(void) 
{
    Date myBirthDate; 

    myBirthDate.day = 20;  
    myBirthDate.show(); 
}

