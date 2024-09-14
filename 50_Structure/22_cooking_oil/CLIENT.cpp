#include <iostream> 
#include "cooking_oil.hpp" 

int main(void) {
    CookingOil carat24(
        "24 Carat", 
        "Soyabean", 
        15, L,
        13.65, KG, 
        16, JUL, 2024, 
        6, MONTHS, 
        30, DEGREE_CELCIUS, 
        1350,
        {"Soyabean Oil", "Permitted Antioxidants", "Vitamin A", "Vitamin D"}, 
        TIN,  
        
        100, G, 
        900, KCAL, 
        0, G, 
        0, G, 
        100, G, 
        38, G,  
        60, G, 
        2, G, 
      //{{"Vitamin A", 2500, "IU", 750, MICROGRAM }, {"Vitamin D", 450, "IU", 11.25, MICROGRAM }}, 

        "", 

        "SHREE GOVINDKRUPA OIL PROCESSING PVT. LTD.", 
        "Plot No. A-12", 
        "Area 7", 
        "MIDC, Jalna", 
        444901, 
        "Jalna", 
        "Gujrat", 
        "govingkrupaoilprocessing@gmail.com", 
        {942563187}, 

        25.0, 25.0, 35.0, CM
    );

    std::cout << carat24; 

    return 0;  
}