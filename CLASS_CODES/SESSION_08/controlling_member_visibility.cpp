/*
    GOAL : comparing member visibility in class and structure 
    DATE : 
*/

#include <iostream> 

// COMPANY: PRODUCT 
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
    using std::endl; 
    using std::cout; 

    // GRAHAK : CLIENT 
    struct MassAndDistance_1 X1; 
    MassAndDistance X2; 

    // CLIENT IS ACCESSING INTERNAL MEMBERS OF THE PRODUCT 
    // HE/SHE HAS BOUGHT 
    X1.m1 = 1.1; 
    X1.m2 = 2.2; 
    X1.r = 3.3; 

    X2.m1 = 1.1;  // error 
    X2.m2 = 2.2; 
    X2.r = 3.3; 

    return 0; 
}
