/*
    GOAL    : To prove the default inaccesibility of members inside class 
    AUTHOR  : Sarthak A. Jaiswal 
    DATE    : 20 Feb 2025 
*/

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

    struct MassAndDistance_1 X1; 
    MassAndDistance_2 X2; 
    
    // CLIENT IS ACCESSING THE INTERNAL MEMBERS OF THE PRODUCT
    // HE/SHE HAS BOUGHT 
    X1.m1 = 10.0; 
    X1.m2 = 20.0; 
    X1.r = 30.0;

    X2.m1 = 1.1; // error : m1 is inaccesible  
    X2.m2 = 2.2; // error : m2 is inaccesible 
    X2.r = 3.3;  // error : r is inaccesible 

    return 0; 
} 
