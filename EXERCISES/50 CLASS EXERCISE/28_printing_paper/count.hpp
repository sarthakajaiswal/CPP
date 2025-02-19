#ifndef _COUNT_HPP 
#define _COUNT_HPP 

#include <iostream> 
#include "units.hpp" 

class Count{
    private: 
        double m_value; 
        multiplier_unit m_unit; 
    
    public: 
        Count(double value, multiplier_unit unit); 
        Count(unsigned int value); 
        friend std::ostream& operator<<(std::ostream& os, const Count& obj); 
}; 

#endif /* _COUNT_HPP */