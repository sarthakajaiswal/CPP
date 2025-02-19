#include <iostream> 
#include "solar_planet.hpp" 

int main(void) {
    SolarPlanet jupiter(
        "Jupiter", 
        5, 
        NO, 95, 
        11.86, YEARS, 
        5.458, 4.950, AU, 
        66854.5, 71497.0, KM, 
        1.898e27, KG, 
        3.13, 
        6.14e10, SQUARE_KM, 
        1.43e18, CUBIC_KM, 
        1.33, GRAM_PER_CM_CUBE, 
        59.5, KM_PER_SEC, 
        12.6, KM_PER_SEC, 
        13.07, KM_PER_SEC, 
        -145, DEGREE_CELCIUS,  
        24.79, METER_PER_SECOND_SQUARE, 

        {"Biggest planet of solar system"}
    ); 

    std::cout << jupiter; 

    return 0; 
}