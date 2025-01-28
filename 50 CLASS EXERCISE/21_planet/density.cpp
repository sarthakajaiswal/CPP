#include <iostream> 
#include "density.hpp" 
#include "units.hpp" 

Density::Density(double value, density_unit_t unit) {
    if(value < 0) {
        std::cout << "Density can't be negative"; 
        m_value = 0; 
    }
    else 
        m_value = value; 

    m_unit = unit; 
}

std::ostream& operator<<(std::ostream& os, const Density& obj) {
    os << obj.m_value << " " << obj.m_unit << " "; 

    return os; 
} 