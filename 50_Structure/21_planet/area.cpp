#include <iostream> 

#include "area.hpp" 

Area::Area(double value, area_unit_t unit) {
    if(value < 0) {
        std::cout << "Area can't be negative"; 
        m_value = 0; 
    }
    else 
        m_value = value; 

    m_unit = unit; 
}

std::ostream& operator<<(std::ostream& os, const Area& obj) {
    os << obj.m_value << " " << obj.m_unit << " "; 

    return os; 
} 