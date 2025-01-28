#ifndef _UNITS_HPP 
#define _UNITS_HPP 

#include <iostream> 

enum energy_unit_t {
    KCAL, 
    CAL, JOULE, KILOWATT_HOUR, BTU, eV, MeV
}; 

enum weight_unit_t {
    TONNE, 
    QUINTAL, KG, G, MG, MCG, NANOGRAM
}; 

enum length_unit_t {
    MILES, 
    KM, YARD, M, FEET, INCH, CM, MM, MICROMETER, NANOMETER, PICOMETER, ARMSTRONG
}; 

typedef length_unit_t dimention_unit_t; 

enum temperature_unit_t {
    DEGREE_CELCIUS, 
    DEGREE_FARENHEIT 
}; 

enum volume_unit_t {
    CUBIC_CM, 
    CUBIC_M, CUBIC_MM, 
    L, ML, KL 
}; 

enum duration_unit_t {
    CENTURIES, 
    DECADES, YEARS, MONTHS, WEEKS, DAYS, 
    HOURS, MINUTES, SECONDS, MILISECONDS, MICROSECONDS  
}; 

std::ostream& operator<<(std::ostream& os, const energy_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const length_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const volume_unit_t& unit); 

#endif /* _UNITS_HPP */