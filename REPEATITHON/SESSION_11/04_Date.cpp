#include <iostream> 

using std::cout; 
using std::endl; 

// SERVER SIDE START 
class Date 
{
    private: 
        int day, month, year ; 
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
    // fay month and year of myDate will contain garbage values 
    Date myDate; 

    myDate.show(); // Date::show(&myDate) 

    return 0; 
}
// CLIENT SIDE END 

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
// SEREVER SIDE END 

// CLIENT SIDE START 
int main(void) 
{
    // day, month and year of myDate will contain garbage values 
    Date myDate; 

    myDate.show(); // Date::show(&myDate) 

    return 0; 
}
// CLIENT SIDE END 
