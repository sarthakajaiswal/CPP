#ifndef _MASS_HPP 
#define _MASS_HPP 

#include <iostream> 
#include "units.hpp" 

class Mass {
    private: 
        double m_value; 
        mass_unit_t m_unit; 

    public: 
        Mass(double value, mass_unit_t unit); 

        friend std::ostream& operator<<(std::ostream& os, const Mass& obj); 
}; 

#endif /* _MASS_HPP */