/*
    GOAL : 1) To know the accessibility of variables defined at different places 
            inside different places in program 
           2) to know Possible entities that can be defined in class 
    DATE : 01 March 2025 
*/

int p; 

int main(void) 
{
    int i; // definition part 

    for() 
    {
        // i in main is accessible here 
        for() 
        {
            int k; 
            // i in main() is accessible 
            // k is accessible 
        }
        // k is not accessible here 
    }
}

void f() 
{
    // i in main() isn't accessible here 
}

// BLOCK statment -> NEW SCOPE 
// FUNCTION / NAMESPACES / CLASS -> BLOCKS -> NAMES 
// THEY ARE KNOWN AS NAMED BLOCKS 

class Date 
{
    public: 
        typedef int day_t; 
}; 

namespace X2 {
    int num; 

    void test() 
    {

    }

    class Y {

    }; 
}

// NAMESPACE NAME::ANY_NAME_IN_NAMESPACE 
X2::num; 
X2::test; 
X2::Y; 

// CLASS_NAME::static data member name 
// classname::static member function name 
// classname::typedef 

class Date 
{
    private: 
        int day; // non-static data 
        int month; // non-static data 
        static int year; // static data member 
    public: 
        // static member function 
        static void test() {

        }

        // non-static data member 
        void get_day() {

        }

        typedef int day_t; 

        class XYZ{

        }; 
}

// inside class one can have  6 kind of entities defined 
1) static data member 
2) non-static data member 
3) member function 
4) static member function 
5) typedef 
6) class 