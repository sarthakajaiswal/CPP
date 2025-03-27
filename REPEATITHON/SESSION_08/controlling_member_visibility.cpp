#include <iostream> 

// COMPANY : PRODUCT
struct MassAndDistance_1 
{
    double m1; 
    double m2; 
    double r; 
}; 

// COMPANY : PRODUCT 
class MassAndDistance 
{
    double m1; 
    double m2; 
    double r; 
}; 

int main(void) 
{
    using std::cout; 
    using std::endl; 

    // CLIENT 
    struct MassAndDistance_1 X1; 
    struct MassAndDistance X2; 

    // CLIENT IS ACCESSING THE MEMBERS OF THE PRODUCT HE/SHE HAS BOUGHT 
    X1.m1 = 1.1; 
    X1.m2 = 2.2; 
    X1.r = 3.3; 

    X2.m1 1.1; 
    X2.m2 = 2.2; 
    X2.r = 3.3; 

    return 0; 
}

#include <iostream> 

// COMPANY : PRODUCT 
struct MassAndDistance_1 
{
    double m1; 
    double m2; 
    double r; 
}; 

// COMPANY : PRODUCT 
class MassAndDistance 
{
    double m1; 
    double m2; 
    double r; 
}; 

int main(void) 
{
    // CLIENT : GRAHAK 
    struct MassAndDistance_1 X1; 
    MassAndDistance X2; 

    X1.m1 = 1.1; 
    X1.m1 = 2.2; 
    X1.r = 3.3; 

    X2.m1 = 1.1;
    X2.m2 = 2.2; 
    X2.r = 3.3; 

    return 0; 
}
