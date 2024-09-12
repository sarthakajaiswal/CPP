#include <iostream> 
#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit) {
    switch (unit) {
        case CENTURIES: 
            os << ""; 
            break; 
        case DECADES: 
            os << ""; 
            break;
        case YEARS:  
            os << "";
            break; 
        case MONTHS: 
            os << ""; 
            break; 
        case WEEKS: 
            os << ""; 
            break; 
        case DAYS: 
            os << ""; 
            break; 
        case HOURS: 
            os << ""; 
            break; 
        case MINUTES: 
            os << ""; 
            break; 
        case SECONDS: 
            os << ""; 
            break; 
        case MILISECONDS: 
            os << ""; 
            break; 
        case MICROSECONDS: 
            os << ""; 
    } 

    return os; 
}

std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit) {
    switch(unit) {
        case TONNE: 
            os << "tonn"; 
            break; 
        case QUINTAL: 
            os << "Qt."; 
            break; 
        case POUND: 
            os << "Pounds"; 
            break; 
        case KG: 
            os << "kgs."; 
            break; 
        case LBS: 
            os << "lbs";
            break; 
        case G: 
            os << "g";
            break; 
        case MG: 
            os << "miligram"; 
            break; 
        case MICROGRAM: 
            os << "micrograms";  
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const amount_multiplier_unit_t& unit) {
    switch(unit) {
        case TRILLION: 
            os << "trillion"; 
            break; 
        case BILLION:  
            os << "billion"; 
            break; 
        case CRORES: 
            os << "Cr."; 
            break;
        case MILLION: 
            os << "million"; 
            break; 
        case LAKHS: 
            os << "lakhs"; 
    }

    return os; 
}