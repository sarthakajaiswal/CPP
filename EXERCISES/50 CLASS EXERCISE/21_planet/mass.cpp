#include <iostream> 
#include "mass.hpp" 

Mass::Mass(double value, mass_unit_t unit) {
    if(value < 0) {
        std::cout << "Mass can't be negative"; 
        m_value = 0; 
    }
    else 
        m_value = value; 

    m_unit = unit; 
}

std::ostream& operator<<(std::ostream& os, const Mass& obj) {
    os << obj.m_value << " " << obj.m_unit << " "; 
    return os; 
}