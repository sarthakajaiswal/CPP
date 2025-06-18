#include <iostream>

class X
{
public:
    void f1()
    {
        std::cout << "In f1()" << std::endl;
    }

    static void f2()
    {
        std::cout << "in f2()" << std::endl;
    }

    static int num;
};

int X::num = 100;

int main(void)
{
    X objX;

    objX.f1(); // ok
    // X::f1(&objX); // not allowed

    objX.f2(); // allowed but address of objX will not be shared with
                // f2() as a parameter as f2() is a static function
    X::f2(); // static member function can be accessed using class name qualification too

    // even public static data can be accessed likewise
    X::num = 5000; // ok
    objX.num = 6000; // ok

    return 0;
}
