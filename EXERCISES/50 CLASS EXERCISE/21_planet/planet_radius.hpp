#ifndef _PLANET_RADIUS_HPP 
#define _PLANET_RADIUS_HPP 

#include <iostream> 

#include "length.hpp" 
#include "units.hpp" 

class PlanetRadius {
    private:    
        Length m_polar_radius; 
        Length m_equator_radius; 
        Length m_mean_radius; 

    public: 
        PlanetRadius(
            double polar_radius_length, 
            double equator_radius_length, 
            length_unit_t unit
        );  

        friend std::ostream& operator<<(std::ostream& os, const PlanetRadius& obj); 
}; 

#endif /* _PLANET_RADIUS_HPP */
