#include <iostream> 
#include "temperature.hpp" 

Temperature::Temperature(double value, temperature_unit_t unit) : 
    m_value(value), m_unit(unit) {
}

std::ostream& operator<<(std::ostream& os, const Temperature& obj) {
    os << obj.m_value << " " << obj.m_unit; 
    return os; 
}