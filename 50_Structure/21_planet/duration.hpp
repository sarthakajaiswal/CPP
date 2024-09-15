#ifndef _DURATION_HPP 
#define _DURATION_HPP 

#include <iostream> 
#include "units.hpp" 

class Duration {
    private: 
        double m_value; 
        duration_unit_t m_unit; 

    public: 
        Duration(double value, duration_unit_t unit); 

        friend std::ostream& operator<<(std::ostream& os, const Duration& obj);     
}; 

#endif 