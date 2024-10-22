#ifndef _LENGTH_HPP 
#define _LENGTH_HPP 

#include <iostream> 
#include "units.hpp" 

class Length{
    private: 
        float m_value; 
        length_unit m_unit; 

    public: 
        Length(float value, length_unit unit); 
        friend std::ostream& operator<<(std::ostream& os, const Length& obj); 
}; 

#endif /* _LENGTH_HPP */