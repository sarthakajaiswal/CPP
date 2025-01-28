#ifndef _DENSITY_HPP 
#define _DENSITY_HPP 

#include <iostream> 
#include "units.hpp" 

class Density {
    private:
        double m_value; 
        density_unit_t m_unit; 
    public:  
        Density(double value, density_unit_t unit); 

        friend std::ostream& operator<<(std::ostream& os, const Density& obj); 
}; 

#endif /* _DENSITY_HPP */