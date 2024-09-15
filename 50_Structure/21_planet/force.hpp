#ifndef _FORCE_HPP 
#define _FORCE_HPP 

#include <iostream> 
#include "units.hpp" 

class Force {
    private: 
        double m_value; 
        force_unit_t m_unit; 
    
    public: 
        Force(double value, force_unit_t unit); 

        friend std::ostream& operator<<(std::ostream& os, const Force& obj); 
}; 

#endif /* _FORCE_HPP */