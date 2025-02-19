#include <iostream> 
#include "washing_powder.hpp"

int main(void) {
    WashingPowder nirma(
        "Nirma", 
        "Sky Blue", 
        {"Lemon freshness"}, 
        25, JUNE, 2024, 
        6, MONTHS, 
        2, KG, 
        134, 

        "Hindustan Uniliver Ltd.", "Uniliver House, B.D. Sawant Marg", "Chakala", "Andheri(E)", 
        "Mumbai", 400099, "Maharashtra", "India", "", {},  

        "Hindustan Uniliver Ltd.", 
        "India", "", {}
    ); 

    std::cout << nirma; 

    return 0; 
}