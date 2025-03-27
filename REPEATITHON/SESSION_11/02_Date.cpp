#include <iostream> 

using std::cout; 
using std::endl; 

class Date 
{
    public: 
        int day; 
        int month; 
        int year; 

        void show(Date* pDate) 
        {
            cout << pDate->day << "/" << pDate->month << "/" << pDate->year << endl; 
        }
}; 

int main(void) 
{
    Date myDate;  // day month year 
    Date d1;        // day month year 

    myDate.day = 8; 
    myDate.month = 2; 
    myDate.year = 2025; 

    Date::show(&myDate); 
    Date::show(&d1); 
}

class C 
{
    public: 
        // f() exist to algorithmically process an object of class C 
        void f() {
            // which object of class C should bw processed in current call of C::f() 
        }
}; 

class YourClassName 
{
    private: 
        int a; 
        char b; 
        float c; 

    public: 
        // YourClassName* this -> FIRST FORMAL PARAMETER 
        void YourFunctionName(int m, int n) 
        {
            this->data_member; 
            this->function_member; 

            this->a; 
            this->b 
            this->c 

            m 
            n 
        }
}; 

int main(void) 
{
    YourClassName YourObjectName; 
     
    YourClassName::YourFunctionName(&yourObjectName); 
    yourObjectName.YourFunctionNme(10, 20); 
}

#include <iostream> 

using std::cout; 
using std::endl; 

class Date 
{
    private: 
        int day; 
        int month; 
        int year; 

        void show(Date* pDate) 
        {
            cout << pDate->day << "/" << pDate->month << pDate->year << endl; 
        }
}; 

int main(void) 
{
    Date myDate; // day month year 
    Date d1; 

    myDate.day = 8; 
    myDate.month = 2; 
    myDate.year = 2025; 

    Date::show(&myDate); 
    Date::show(&d1); 
}

class C 
{
    public: 
        // f() exist algorithmically to process an object of class C 
        void f() {
            // which object of class C should be processed in current call ? 
        }
}; 

class YourClassName 
{
    private: 
        int a; 
        char b; 
        float c; 
    public: 
        // YourClassName* this -> FORST FORMAL PARAMETER 
        void YourFunctionName(int m, int n) 
        {
            this->data_member 
            this->function_member 

            this->a 
            this->b 
            this->c 

            m 
            n 
        }
}; 

int main(void) 
{
    YourClassName YourObjectName; 

    YourClassName::YourFunctionName(&yourObjectName); 
    yourObjectName.YourFunctionName(10, 20); 
}

