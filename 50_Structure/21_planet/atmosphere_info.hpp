#ifndef _ATMOSPHERE_INFO_HPP 
#define _ATMOSPHERE_INFO_HPP 

#include <iostream> 
#include <vector> 

#include "pressure.hpp" 
#include "length.hpp" 
//#include "composition.hpp" 

class AtmosphereInfo {
    private: 
        Pressure m_surface_pressure; 
        Length m_scale_height; 
        //std::vector<Composition> m_element_composition; 
    
    public: 
        AtmosphereInfo(
            double surface_pressure_value, 
            pressure_unit_t surface_pressure_unit, 
            double atmosphere_height, 
            length_unit_t atmosphere_height_unit 
            // std::vector<std::tuple<double, double>> element_compositions
        );

        friend std::ostream& operator<<(std::ostream& os, const AtmosphereInfo& obj);  
}; 

#endif /* _ATMOSPHERE_INFO_HPP */