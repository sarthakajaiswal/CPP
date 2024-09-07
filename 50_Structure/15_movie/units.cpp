#include <iostream> 
#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const amount_unit_t& unit) {
    switch(unit) {
        case 0: 
            os << ""; 
            break; 
        case 1: 
            os << "K"; 
            break; 
        case 2: 
            os << "Lakhs"; 
            break; 
        case 3: 
            os << "Cr."; 
            break; 
        case 4: 
            os << "million"; 
            break; 
        case 5: 
            os << "billion"; 
            break; 
        case 6: 
            os << "trillion"; 
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const currency_t& unit) {
    switch(unit) {
        case 0: 
            os << "Rs."; 
            break; 
        case 1: 
            os << "$";
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit) {
    switch(unit) {
        case 0: 
            os << "years"; 
            break; 
        case 1: 
            os << "months"; 
            break; 
        case 2: 
            os << "weeks"; 
            break; 
        case 3: 
            os << "days"; 
            break; 
        case 4: 
            os << "hours"; 
            break; 
        case 5: 
            os << "mins."; 
            break; 
        case 6: 
            os << "seconds"; 
            break; 
        case 7: 
            os << "ms"; 
            break; 
        case 8: 
            os << "microseconds";
    }
    return os; 
}