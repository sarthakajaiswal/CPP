#ifndef _UNITS_HPP 
#define _UNITS_HPP 

typedef enum duration_unit {
    CENTURIES = 0, 
    DECADES, YEARS, MONTHS, WEEKS, DAYS, HOURS, MINUTES, SECONDS, MILISECONDS, MICROSECONDS
}duration_unit_t; 

typedef enum weight_unit {
    TONNE=0, 
    QUINTAL, POUND, KG, LBS, G, MG, MICROGRAM 
}weight_unit_t; 

typedef enum amount_multiplier_unit {
    TRILLION = 0, 
    BILLION, CRORES, MILLION, LAKHS, THOUSAND, ONES
}amount_multiplier_unit_t; 

std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const amount_multiplier_unit_t& unit); 

#endif /* _UNITS_HPP */