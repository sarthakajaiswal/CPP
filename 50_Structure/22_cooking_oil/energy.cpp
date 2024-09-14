#include <iostream> 
#include "energy.hpp" 

Energy::Energy(double value, energy_unit_t unit) {
    if(m_value < 0) {
        std::cout << "Energy can't be negative; assigned to zero"; 
        m_value = 0.0; 
    } 
    else {
        m_value = value; 
    } 
    m_unit = unit; 
} 

std::ostream& operator<<(std::ostream& os, const Energy& obj) {
    os << obj.m_value << " " << obj.m_unit; 
    return os; 
}