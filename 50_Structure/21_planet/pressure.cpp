#include <iostream> 
#include "pressure.hpp" 

Pressure::Pressure(double value, pressure_unit_t unit) {
    if(value < 0) {
        std::cout << "Pressure can't be negative"; 
        m_value = 0; 
    }
    else 
        m_value = value; 

    m_unit = unit; 
}

std::ostream& operator<<(std::ostream& os, const Pressure& obj) {
    os << obj.m_value << " " << obj.m_unit << " "; 
    return os; 
}