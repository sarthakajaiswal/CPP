/*
    GOAL : entities inside class and namespace 
    DATE : 01 March 2025
*/

#include <iostream> 

using std::cout; 
using std::endl; 

// Namespace : It is a BLOCK for creating new names 
// Inside namespace X we hace defined following names 
// num, test, day_t, Date, Y 
namespace X 
{
    // data variable 
    int num; 

    // function variable 
    void test(void) {
        cout << "Hello World!!!" << std::endl; 
    } 

    // typedef 
    typedef int day_t; 

    // class inside namespace 
    class Date{
        private: 
            int day, month, year; 
        public: 
            Date() {
                day=  1; 
                month = 1; 
                year = 1970; 
            }
    } ; 

    // namespace inside namespace 
    namespace Y{
        int p; 
    } 
} 

class Test 
{
    public: 
        int num; // non static data member 
        static int snum; // static data member 

        // member function 
        static void stest_function() 
        {
            cout << "Inside static test() " << endl; 
        }

        // typedef 
        typedef int pqr_t; 

        // class 
        class PQR 
        {
            private: 
                int p, q, r; 
        }; 
}; 

// definition of static variable name inside class 
int Test::snum = 100; 

void namespace_demo(void); 
void class_demo(void); 

int main(void) 
{
    namespace_demo(); 
    class_demo(); 
    return 0; 
}

void namespace_demo(void) 
{
    X::num = 100; // ok 
    X::test(); // ok 
    X::Date myDate; // ok 
    X::day_t day; // ok 
    X::Y::p = 10; // ok 
}

void class_demo(void) 
{
    // Test::num; // NOT ALLOWED 
    // Test::test_function(); // NOT ALLOWED 

    Test::snum = 500; // ok 
    Test::stest_function(); // ok 
    Test::pqr_t num = 100; // ok 
    Test::PQR myObj; // ok 
}

// THEORY 
// X::Y  -> OK 
// where 
// X is namespace Y can be 
// 1) data variable 2) function variable 3) typedef 
// 4) namespace 5) class 
// X is class Y can be 
// 1) static data member 2) static member function 3) typedef 
// 4) nested class 
// Y is available as per public-private rule. 
