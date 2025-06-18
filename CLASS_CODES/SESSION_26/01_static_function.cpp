#include <iostream>

class X
{
private:
    int p, q, r;

public:
    X(int _p, int _q, int _r)
    {
        std::cout << "---- In X::X() ----" << std::endl;
        this->p = _p;
        this->q = _q;
        this->r = _r;
        std::cout << "---- Leaving X::X() ----" << std::endl;
    }

    void f1(int x)
    {
        std::cout << "---- In X::f() ----" << std::endl;
        // THIS keyword works here
        std::cout << "Printing p, q, r, of object" << std::endl;
        std::cout << this->p << " " << this->q << " " << this->r << std::endl;
        std::cout << "x: " << x << std::endl;
        std::cout << "---- Leaving X::f1() ----" << std::endl;
    }

    static void f2(int x)
    {
        std::cout << "---- In X::f2() ----" << std::endl;
        // this keyword wont work here
//        std::cout << "p : " << this->p << std::endl;
        std::cout << "x: " << x << std::endl;
        std::cout << "---- Leaving X::f2() ----" << std::endl;
    }
};

