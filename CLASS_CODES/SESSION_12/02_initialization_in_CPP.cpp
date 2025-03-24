/* 
    GOAL : limitation for object initialization in CPP 
    DATE : 09 FEB 2025 
*/

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
        void init(int init_day, int init_month, int init_year) 
        {
            this->day = init_day; 
            this->month = init_month; 
            this->year = init_year; 
        }

        void show() 
        {
            cout << day << "/" << month << "/" << year << endl; 
        }
}; 

int main(void) 
{
    int num = 100; 
    printf("num = %d\n", num); // 100 

    Date myDate; // There is no way of initialization as of now 
                 // to initialize an object of Date 
                 // We can add init() function to class 
    myDate.init(9, 2, 2025); 

    // add show() function 
    myDate.show(); // 9/2/2025 

    return 0; 
}
