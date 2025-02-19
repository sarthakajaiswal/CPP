#ifndef _TEMPERATURE_HPP 
#define _temperATURe_HPP 

#include <iostream> 
#include "units.hpp" 

class Temperature {
    private: 
        double m_value; 
        temperature_unit_t m_unit; 

    public: 
        Temperature(double value, temperature_unit_t unit);

        friend std::ostream& operator<<(std::ostream& os, const Temperature& obj); 
}; 

#endif /* _TEMPERATURE_HPP */