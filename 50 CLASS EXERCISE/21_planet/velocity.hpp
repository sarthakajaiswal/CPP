#ifndef _VELOCITY_HPP 
#define _VELOCITY_HPP 

#include <iostream> 
#include "units.hpp" 

class Velocity {
    private: 
        double m_value; 
        velocity_unit_t m_unit; 

    public: 
        Velocity(double value, velocity_unit_t unit);

        friend std::ostream& operator<<(std::ostream& os, const Velocity& obj); 
}; 

#endif /*_VELOCITY_HPP */