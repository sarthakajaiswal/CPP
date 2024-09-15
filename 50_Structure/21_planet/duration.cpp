#include <iostream> 
#include "duration.hpp" 

Duration::Duration(double value, duration_unit_t unit) {
    if(value < 0) {
        std::cout << "Duration can't be negative" << std::endl; 
        m_value = 0.0; 
    }
    else 
        m_value = value; 

    m_unit = unit;       
}

std::ostream& operator<<(std::ostream& os, const Duration& obj) {
    os << obj.m_value << " " << obj.m_unit << " "; 
    return os; 
}