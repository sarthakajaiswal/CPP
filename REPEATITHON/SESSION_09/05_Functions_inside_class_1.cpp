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
            cout << day << "/" 
                 << month << "/" 
                 << year << "\n"; 
        }

        void show(Date* pDate) 
        {
            cout << pDate->day << "/" 
                 << pDate->month << "/" 
                 << pDate->year << "\n"; 
        }

        // EVERY MEMBER FUNCTION THAT IS WRITTEN INSIDE CLASS DATE 
        // EXIST TO PROCESS OBJECT OF CLASS DATE 

        // EVERY SUCH FUNCTION MUST ACCEPT THE ADDRESS OF DATE OBJECT 
        // TO UNDERSTAND WHICH DAte OBJECT TO PROCESS IN CURRENT CALL? 
}; 

// Let C be ant class 
// Let f() be any function we want to define in class 
class C 
{
    public: 
        void f(C* pC, /* optional other params */)
        {

        }

        void g() 
        {

        }
}; 

int main(void) 
{
    int result_saj; 
    result_saj = compute(10, 20); 

    Date myBirthDate_saj; 
    myBirthDate_saj.day = 20; 
    myBirthDate_saj.month = 7; 
    myBirthDate_saj.year = 1986; 

    Date::show(&myBirthDate_saj); 

    Date d1_saj; 
    d1_saj.day = 2; 
    d1_saj.month = 2; 
    d1_saj.year = 1990; 
    Date::show(&d1_saj); 

    Date d2_saj; 
    d2_saj.day = 3; 
    d2_saj.month = 3; 
    d2_saj.year = 1990; 
    Date::show(&d2_saj); 

    return (0); 
}

int compute(int x, int y) 
{
    return ((x+y) * (x-y)); 
}

/////////////////////////////////////////////////// 

class Date 
{
    public: 
        int day; 
        int month; 
        int year; 

        void show() 
        {
            cout << this->day << "/" 
                 << this->month << "/" 
                 << this->year << "\n"; 
        }
}; 

int main(void) 
{
    Date myBirthDate_saj; 

    myBirthDate_saj.day = 20; 
    myBirthDate_saj.month = 7; 
    myBirthDate_saj.year = 1980; 

    // Date::show(&myBirthDate) 
    myBirthDate.show(); 
} 

