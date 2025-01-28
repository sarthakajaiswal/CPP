#include <iostream> 
#include "length.hpp" 

Length::Length() : m_value(0.0), m_unit(CM) {}

Length::Length(double value, length_unit_t unit) {
    if(value < 0) {
        std::cout << "Length can't be negative"; 
        m_value = 0; 
    }
    else 
        m_value = value; 

    m_unit = unit; 
}

std::ostream& operator<<(std::ostream& os, const Length& obj) {
    os << obj.m_value << " " << obj.m_unit << " "; 
    return os; 
}