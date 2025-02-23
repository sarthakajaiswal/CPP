#include <iostream> 

// COMPANY : PRODUCT 
struct MassAndDistance_1 
{
    double m1; 
    double m2; 
    double r; 
}; 

// COMPANY : PRODUCT 
class MassAndDistance_2 
{
    double m1; 
    double m2; 
    double r; 
}; 

int main(void) 
{
    using std::cout; 
    using std::endl; 

    // GRAHAK : CLIENT 
    struct MassAndDistance_1 x1; 
    MassAndDistance x2; 

    // CLENT IS ACCESSING THE INTENAL MEMBERS OF THE PRODUCT 
    // HE/SHE HAS BOUGHT 
    x1.m1 = 1.1; 
    x1.m2 = 2.2; 
    x2.r = 3.3; 

    x2.m1 = 1.1; 
    x2.x2 = 2.2; 
    x2.r = 3.3; 

    return (0); 
}

