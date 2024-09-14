#ifndef _VOLUME_HPP 
#define _VOlume_HPp 

#include <iostream> 
#include "units.hpp" 

class Volume {
    private: 
        double m_value; 
        volume_unit_t m_unit; 

    public: 
        Volume(double value, volume_unit_t unit);

        friend std::ostream& operator<<(std::ostream& os, const Volume& obj);  
}; 

#endif 