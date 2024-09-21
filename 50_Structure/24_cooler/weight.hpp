#ifndef _WEIGHT_HPP 
#define _WEIGHT_HPP 

#include <iostream> 
#include "units.hpp" 

class Weight {
    private: 
        double m_value; 
        weight_unit_t m_unit; 
    public: 
        Weight(double value, weight_unit_t unit); 

        friend std::ostream& operator<<(std::ostream& os, const Weight& unit); 
}; 

#endif /* _WEIGHT_HPP */