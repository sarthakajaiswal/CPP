#ifndef _AREA_HPP 
#define _AREA_HPP 

#include <iostream> 
#include "units.hpp"

class Area {
    private: 
        double m_value; 
        area_unit_t m_unit; 

    public: 
        Area(double value, area_unit_t unit); 

        friend std::ostream& operator<<(std::ostream& os, const Area& obj); 
}; 

#endif /* _AREA_HPP */