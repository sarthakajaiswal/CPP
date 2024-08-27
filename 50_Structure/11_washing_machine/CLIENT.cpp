#include <iostream>

#include "washing_machine.hpp"

int main(void) {
    WashingMachine machine1(
        "Intergreat", 
        "New XL", 
        "Grey", 
        "Front Load", 
        PUSH_BUTTON, 
        {"Self Water Intake", "Attractive Design"}, 
        "India", 
        26.6, 
        15000,
        16.0, 
        1300, 
        NO, 
        240, AC, 512, 
        1.5, 1.0, 3.2, "m", 
        "Gada Electronics", "Main Market", "Rajkamal", "Amravati", 445234, 0, "", 
        "Philips India", "MIDC", "Mumbai Road", "Gudgaon", 751263, 0, "", 
        3.9, 5, 586213, 
        26, "Home Appliances"  
    );

    std::cout << machine1; 

    return 0; 
}