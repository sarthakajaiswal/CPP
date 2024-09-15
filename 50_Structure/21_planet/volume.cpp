#include <iostream> 
#include "volume.hpp" 

Volume::Volume(double value, volume_unit_t unit) {
    if(value < 0) {
        std::cout << "Volume can't be negative"; 
        m_value = 0; 
    }
    else 
        m_value = value; 

    m_unit = unit; 
}

std::ostream& operator<<(std::ostream& os, const Volume& obj) {
    os << obj.m_value << " " << obj.m_unit << " "; 
    return os; 
}