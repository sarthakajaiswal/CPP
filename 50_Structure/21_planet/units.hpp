#ifndef _UNITS_HPP 
#define _UNITS_HPP 

#define CASE(unit, unit_string) case unit: os << unit_string; break;

enum length_unit_t {
    LIGHT_YEAR, 
    AU, 
    MILE, KM, M, CM, MM, 
    MICROMETER, NANOMETER, PICOMETER, ARMSTRONG
}; 

enum temperature_unit_t {
    DEGREE_CELCIUS,
    DEGREE_FARENHEIT, 
    KELVIN
};

enum mass_unit_t {
    TONN, QUINTAL, KG, G, 
    MG, MICROGRAM, POUND, 
    ATOMIC_MASS_UNIT
};  

enum velocity_unit_t {
    M_PER_SEC, KM_PER_SEC, 
    KM_PER_HR, KM_PER_MIN 
}; 

enum volume_unit_t {
    CUBIC_KM, CUBIC_M, CUBIC_CM, CUBIC_MM, 
    KL, L, ML
}; 

enum area_unit_t {
    SQUARE_KM, SQUARE_M, SQUARE_CM, SQUARE_MM, 
    SQUARE_FOOT, SQUARE_INCH  
}; 

enum density_unit_t {
    KG_PER_M_CUBE, 
    GRAM_PER_CM_CUBE, 
    GRAM_PER_ML, 
    GRAM_PER_L, 
    KG_PER_L
}; 

enum pressure_unit_t {
    PASCAL, KILOPASCAL, MEGAPASCAL, 
    BAR, MILIBAR, 
    ATM, TORR, PSI, MMHG, 
    NEWTON_PER_SQUARE_METER
}; 

enum force_unit_t {
    NEWTON, KILONEWTON, 
    METER_PER_SECOND_SQUARE, 
    DYNE, LBF
}; 

enum duration_unit_t {
    CENTURIES, DECADE, YEARS,  
    MONTHS, DAYS, WEEKS, 
    HOURS, MINUTES, SECONDS, 
    MILISECONDS, MICROSECONDS, NANOSECONDS
}; 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const volume_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const mass_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const pressure_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const density_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const area_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const velocity_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const force_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit); 

#endif 