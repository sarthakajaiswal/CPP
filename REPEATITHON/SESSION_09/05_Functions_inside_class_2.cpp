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

        // EVERY MEMBER FUNCTION THAT IS WRITTEN INSIDE CLASS 
        // EXIST TO PROCESS OBJECT OF THAT CLASS 

        // EvERY SUCH FINCTION MUST ACCEPT THE ADDRESS OF DATE TO 
        // UNDERSRAND WHICH DATE OBJECT TO PROCESS IN CURRENT CALL 
}; 

// Let C be any class 
// Let f() be any function we want to define in class 
Class C 
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
    d1_saj.day = 3; 
    d1_saj.month = 12; 
    d1_saj.year = 3000; 
    Date::show(&d1_saj); 

    Date d2_saj; 
    d2_saj.day = 29; 
    d2_saj.month = 4; 
    d2_saj.year = 2025; 
    Date::show(&d2_saj); 

    return (0); 
}

int compute(int x, int y) 
{
    return ((x+y) * (x-y)); 
}

//////////////////////////////////////// 

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
    myBirthDate_saj.month = 9; 
    myBirthDate_saj.year = 2000; 

    // Date::show(&mhyBirthDate_saj); 
    myBirthDate_saj.show(); 
}

