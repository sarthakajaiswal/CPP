/* 
    GOAL : to understand need of passing address of calling object to the called method 
           to understand development of object.function_name() syntax 

    DATE : 
*/

#include <iostream> 

using std::cout; 

int compute(int x, int y); 

class Date 
{
    public: 
        int day; 
        int month; 
        int year; 

        void show(void) 
        {
            cout << day << '/' << month << "/" << year << '\n'; 
        }

        void show(Date* pDate) 
        {
            cout << pDate->day << "/" << pDate->month << "/" << pDate->year << '\n'; 
        }

        // EVERY FUNCTION WRIITEN INSIDE CLASS DATE 
        // EXIST TO PROCESS OBJECT OF CLASS DATE 

        // EVERY SUCH FUNCTION MUSR ACCEPT ADDRESS OF DATE OBJECT 
        // TO UNDERSTAND WHICH DATE OBJECT TO PROCESS IN THE CURRENT CALL ? 
}; 

// Let C be any class 
// Let f() be any function that we want to define in class 

class C 
{
    public: 
        void f(C* pC, /*optional other parameters*/)
        {} 

        void g() 
        {} 
}; 

int main(void) 
{
    int result; 

    result = compute(10, 5); 

    Date myBirthDate;
    myBirthDate.day = 20; 
    myBirthDate.month = 7; 
    myBirthDate.year = 1986; 

    Date::show(&myBirthDate); 

    Date d1; 
    d1.day = 1; 
    d1.month = 2; 
    d1.year = 1986; 
    Date::show(&d1); 

    Date d2; 
    d2.day = 2; 
    d2.month = 10; 
    d2.year = 1988; 
    Date::show(&d2); 
}

int compute(int x, int y) 
{
    return (x+y) * (x-y); 
}

/////////// 

class Date 
{
    public: 
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
    myBirthDate.month = 7; 
    myBirthDate.year = 1986; 

    // Date::show(&myBirthDate) 
    myBirthDate.show(); // Date::show(&myBirthDate) 
}

