#include <iostream> 
#include "velocity.hpp" 

Velocity::Velocity(double value, velocity_unit_t unit) {
    if(value < 0) {
        std::cout << "Velocity can't be negative"; 
        m_value = 0; 
    }
    else 
        m_value = value; 

    m_unit = unit; 
}

std::ostream& operator<<(std::ostream& os, const Velocity& obj) {
    os << obj.m_value << " " << obj.m_unit << " "; 
    return os; 
}