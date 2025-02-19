#ifndef _DIMENTION_HPP 
#define _DIMENTION_HPP 

#include <iostream> 
#include "units.hpp" 

class Dimention {
    private: 
        float m_length; 
        float m_width; 
        float m_height; 
        dimention_unit_t m_unit; 

    public: 
        Dimention(float length, float width, float height, dimention_unit_t unit);
        Dimention(float length, float width, dimention_unit_t unit);

        friend std::ostream& operator<<(std::ostream& os, const Dimention& obj);  
}; 

#endif