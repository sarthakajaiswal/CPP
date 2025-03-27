#include <iostream> 

using std::cout; 
using std::endl; 

class Date 
{
    public: 
        int day; 
        int month;
        int year; 

        void show() 
        {
            cout << "***** ENTER DATE::show() *****" << endl; 
            cout << "Address of object used to call Date::show() : " << this << endl; 
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
            cout << "***** Leave Date::show() *****" << endl; 
        }
}; 

int main(void) 
{
    Date d1; 
    Date d2; 
    Date d3; 

    // settting day month year of d1 
    d1.day = 2; 
    d1.month = 2; 
    d1.year = 2025; 

    // setting day month year of d2 
    d2.day = 5; 
    d2.month = 6; 
    d2.year = 1990; 

    // setting day month year of d3 
    d3.day = 11; 
    d3.month = 12; 
    d3.year = 2028; 

    cout << "main() : Making use of object 'd1' to make call to Date::show()" << endl; 
    cout << "main() : Address of object 'd1' is : " << &d1 << endl; 
    d1.show(); // == Date::show(&d1) 

    cout << "main() : making use of object 'd2' to make call to Date::show() " << endl; 
    cout << "main() : Address of object 'd2' is : " << &d2 << endl; 
    d2.show(); // == Date::show(&d2); 

    cout << "main() : Making use of object 'd3' to make call to Date::show() : " << endl; 
    cout << "main() : Address of object 'd3' is : " << &d3 << endl; 
    d3.show(); // == Date::show(&d3); 

    return 0; 
}

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
            cout << "**** ENTER Date::show() *****" << endl; 
            cout << "Address of object used to call Date::show() : " << this << endl; 
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
            cout << "***** LEAVE Date::show() *****" << endl; 
        }
}; 

int main(void) 
{
    Date d1; 
    Date d2; 
    Date d3; 

    // setting day month year of d1 
    d1.day = 2; 
    d1.month = 2; 
    d1.year = 2025; 

    // setting day month year of d2 
    d2.day = 5; 
    d2.month = 6; 
    d2.year = 2028; 

    cout << "main(): making use of object 'd1' to call Date::show() " << endl; 
    cout << "main() : address of object 'd1' is : " << &d1 << endl; 
    d1.show(); // == Date::show(&d1) 

    cout << "main() : making use of object 'd2' to make call to Date::show() : " << endl; 
    cout << "main() : address of object 'd2' is : " << &d2 << endl; 
    d2.show(); // == Date::show(&d2); 

    cout << "main() : making use of object 'd3' to make call to Date::show() " << endl; 
    cout << "main() : address of object 'd3' is : " << &d3 << endl; 
    d3.show(); // == Date::show(&d3)  

    return 0; 
}

#include <iostream> 

using std::cout; 
using std::endl; 

class Date 
{
    public: 
        int day; 
        int month; 
        int year; 

        void show() 
        {
            cout << "***** ENTER date::show() *****" << endl; 
            cout << "Adderss of object used to call Date::show() : " << this << endl; 
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
            cout << "***** LEAVE Date::show() *****" << endl; 
        }
}; 

int main(void) 
{
    Date d1; 
    Date d2; 
    Date d3; 

    // setting day month year of d1 
    d1.day = 2; 
    d1.month = 2; 
    d1.year = 2025; 

    // setting day month year of d2 
    d2.day = 5; 
    d2.month - 6; 
    d2.year = 1990; 

    // setting day month year of d3 
    d3.day = 11; 
    d3.month = 12; 
    d3.year = 2928; 

    cout << "main() : Making use of object d1 to call Date::show() " << endl; 
    cout << "main() : Address of object 'd1' is " << &d1 << endl; 
    d1.show(); // == Date::show(&d1); 

    cout << "main() : Making use of object 'd2' to call Date::show() " << endl; 
    cout << "main() : Address of obejct 'd2' is : " << &d2 << endl; 
    d2.show(); // ==Date::show(&d2) 

    cout << "main() : Making use of object 'd3' to call Date::show() " << endl; 
    cout << "main() : Address of object 'd3' is : " << &d3 << endl; 
    d3.show(); // ==Date::show(&d3); 

    return 0; 
}

