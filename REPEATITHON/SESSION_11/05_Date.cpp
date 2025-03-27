// header file inclusion 
#include <iostream> 

// importing symbols 'cout' and 'cin' from standard namespace 
using std::cout; 
using std::endl; 

// server side -> start 
class Date 
{
    private: 
        // data layout definition 
        int day; 
        int month; 
        int year; 
    public: 
        // public member function 
        // REMEMBER -> first parameter of init() function is Date* this 
        void init(int init_day, int init_month, int init_year) 
        {
            this->day = init_day; 
            this->month = init_month; 
            this->year = init_year; 
        }

        // REMEMBER -> forst parameter of show() is Date* this 
        void show() 
        {
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
        }
}; 
// server side end 

// client side -> start 
int main(void) 
{
    // create an object of class Date 
    Date myDate; 

    // use object of class Date 
    cout << "myDate object before calling init() function on it" << endl; 
    myDate.show(); // Date::show(&myDate) 
    myDate.init(8, 2, 2025); // Date::init(&myDate, 8, 2, 2025) 
    cout << "myDate object after calling init() function on it " << endl; 
    myDate.show(); // Date::show(&myDate) 

    return (0); 
}
// client side->end 

//2 
// header file inclusion 
#include <iostream> 

// importing symbols 'cout' and 'cin' from standard namespace 
using std::cout; 
using std::endl; 

// server side -> start 
class Date 
{
    private: 
        // data layout information 
        int day; 
        int month; 
        int year; 
    public: 
        // public member functions 
        // REMEMBER -> forst parameter of init() function is Date* this 
        void init(int init_day, int init_month, int init_year) 
        {
            this->day = init_day; 
            this->month = init_month; 
            this->year = init_year; 
        }

        // REMEMBER -> forst parameter of show() is Date* this 
        void show() 
        {
            cout << this->day << "/" << this->month << "/" << this->year << endl; 
        }
}; 
// server side -> end 

// client side -> start 
int main(void) 
{
    // create an object of class date 
    Date myDate; 

    // use an object of class date 
    cout << "myDate object before calling init() function on it " << endl; 
    myDate.show(); // Date::show(&myDate) 
    myDate.init(8, 2, 2025); 
    cout << "myDate object after calling init() function on it " << endl; 
    myDate.show(); 

    return (0); 
}
// client side ->end 
