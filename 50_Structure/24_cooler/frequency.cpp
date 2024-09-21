#include <iostream> 
#include "frequency.hpp" 

CurrentParameter::Frequency::Frequency(double value, frequency_unit_t unit) {
    m_unit = unit; 
    if(value < 0) {
        std::cout << "Frequency can't be negative" << std::endl; 
        m_value = 0.0; 
        return; 
    }
    m_value = value; 
} 

std::ostream& CurrentParameter::operator<<(std::ostream& os, const CurrentParameter::Frequency& obj) {
    os << obj.m_value << " " << obj.m_unit; 
    return os; 
}