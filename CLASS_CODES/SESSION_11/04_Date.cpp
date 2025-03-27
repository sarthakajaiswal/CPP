/*
    GOAL : abstrction barrier exist in CPP, so demostrating need of separate init() function  
    
    DATE : 08 FEB 2025 
*/

#include <iostream> 

using std::cout; 
using std::endl; 

// SERVER SIDE START 
class Date 
{
    private: 
        int day, month, year; 
    public: 
        void show() 
        {
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
        }
}; 
// SERVER SIDE END 

// CLIENT SIDE START 
int main(void) 
{
    // day, month abd year of myDate will contain garbage values 
    Date myDate; 

    myDate.show(); // Date::show(&myDate); 

    return 0; 
}
// CLIENT SIDE END 
