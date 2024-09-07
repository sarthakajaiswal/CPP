#ifndef _UNITS_HPP 
#define _UNITS_HPP 

typedef enum amount_unit {
    ONES=0, 
    THOUSANDS, 
    LAKHS, 
    CRORES, 
    MILLION, 
    BILLION, 
    TRILLION
}amount_unit_t; 

typedef enum currency {
    RUPEES=0, 
    DOLLAR  
}currency_t;

typedef enum duration_unit {
    YEARS, 
    MONTHS, 
    WEEKS, 
    DAYS, 
    HOURS, 
    MINUTES, 
    SECONDS, 
    MILISECONDS, 
    MICROSECONDS
}duration_unit_t; 

std::ostream& operator<<(std::ostream& os, const amount_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const currency_t& unit);
std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit); 

#endif