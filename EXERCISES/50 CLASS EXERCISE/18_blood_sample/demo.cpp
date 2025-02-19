#include <iostream> 

class A{
    private: 
        int a1; 

    friend void fun(void); 
}; 

class B {
    private: 
        int b1; 

    friend void fun(void); 
}; 

void fun(void) {
    A inA; 
    B inB; 

    inA.a1=10, inB.b1=20; 

    std::cout << inA.a1 << inB.b1 << std::endl; 
}

int main(void) 
{
    fun(); 
    return 0; 
}