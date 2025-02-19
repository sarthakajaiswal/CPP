#include <iostream>
#include <string>

#include "Temperature.hpp"

Temperature::Temperature(float value) : 
    m_value(value), 
    m_unit(DEGREE_CELCIUS) {
        
    }

std::string Temperature::get_unit_string() const {
    if(this->m_unit)
        return "deg. farenheit";
    else
        return "deg. celcius";
}

Temperature& Temperature::convert_to_farenheit() {
    if(this->m_unit == DEGREE_CELCIUS){
        this->m_value = this->m_value * 9.00/5.00 + 32.0;
        this->m_unit = DEGREE_FARENHEIT;
    }

    return *this;
}

Temperature& Temperature::convert_to_celcius() {
    if(this->m_unit == DEGREE_FARENHEIT) {
        this->m_value = (this->m_value - 32.0) * 5.0/9.0;
        this->m_unit = DEGREE_CELCIUS;
    }

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Temperature& temp) {
    os << temp.m_value << " " << temp.get_unit_string();
    return os;
}