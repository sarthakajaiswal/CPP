#include <iostream> 
#include "length.hpp" 
#include "units.hpp" 

Length::Length(float value, length_unit unit) {
    m_unit = unit; 
    if(value < 0) {
        std::cout << "Length can't be negative"; 
        m_value = 0.0f; 
        return; 
    }
    m_value = value; 
}

std::ostream& operator<<(std::ostream& os, const Length& obj) {
    os << obj.m_value << " " << obj.m_unit; 
    return os; 
}