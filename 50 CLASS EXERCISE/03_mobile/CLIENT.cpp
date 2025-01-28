#include <iostream>

#include "smartphone.hpp"

int main(void) {
    SmartPhone phone1(
        "Samsung", 
        "Note 8", 
        "Red", 
        "Snapdragon", 4, 15000, 
        16, GB, 512, GB, 
        "Android", "14", 
        1.5, 
        20, 
        5000, 
        {{"Handset", 1}, {"Charger", 1}}, 
        22.0, 13.2, 8.0, INCHES, 
        4.2, 5201, 
        15000 
    );

    std::cout << phone1;

    return 0;
}