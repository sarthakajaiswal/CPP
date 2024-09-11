#include <iostream> 
#include "blood_sample.hpp" 

int main(void) {
    BloodSample sample1(
        "Captain Marvel", 
        28, YEARS,
        M, 
        POSTMEAL, 
        "Juni Basti, Badnera", 
        "Dr. Bhushan", 
        "Marvel Pathology",
        {"CBC", "Sugar", "Thyroid"}, 
        RED, 
        5.0, 
        28, FEB, 2023, 
        25, 61  
    ); 

    std::cout << sample1; 

    return 0;   
}