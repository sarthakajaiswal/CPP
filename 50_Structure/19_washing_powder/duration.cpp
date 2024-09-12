#include <iostream> 
#include "duration.hpp" 

Duration::Duration(unsigned int value, duration_unit_t unit) : 
    m_value(value), 
    m_unit(unit) {}

std::ostream& operator<<(std::ostream& os, const Duration& obj) {
    os << obj.m_value << " " << obj.m_unit; 
    return os; 
}