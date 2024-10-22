#include <iostream> 
#include "count.hpp" 

Count::Count(double value, multiplier_unit unit) {
    m_unit = unit; 
    if(value < 0) {
        std::cout << "Count can't be negative"; 
        m_value = 0.0f; 
        return; 
    }
    m_value = value; 
}

Count::Count(unsigned int value) : m_unit(ONES), m_value(value) {} 

std::ostream& operator<<(std::ostream& os, const Count& obj) {
    os << obj.m_value; 
    if(obj.m_unit != ONES) 
        os << obj.m_unit; 

    return os; 
}