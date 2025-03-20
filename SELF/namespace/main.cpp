#include <iostream> 
#include "namespace.h" 

using namespace MyNamespace; 

int main(void) 
{
    std::cout << "num=" << num; 
    std::cout << "c=" << c; 
    std::cout << "d=" << d; 
    std::cout << "f=" << f; 

    return 0; 
} 