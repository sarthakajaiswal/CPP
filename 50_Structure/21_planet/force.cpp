#include <iostream> 
#include "force.hpp" 

Force::Force(double value, force_unit_t unit) : 
    m_value(value), m_unit(unit) {} 

std::ostream& operator<<(std::ostream& os, const Force& obj) {
    os << obj.m_value << " " << obj.m_unit << " "; 
    return os; 
}