#include <iostream> 
#include "planet_radius.hpp" 

PlanetRadius::PlanetRadius(
    double polar_radius, 
    double equator_radius, 
    length_unit_t unit 
) {
    if(polar_radius < 0 || equator_radius < 0) {
        m_polar_radius = Length(0.0, unit);  
        m_equator_radius = Length(0.0, unit);  
        m_mean_radius = Length(0.0, unit); 
    } 
    else {
        m_polar_radius = Length(polar_radius, unit);  
        m_equator_radius = Length(equator_radius, unit); 
        m_mean_radius = Length((polar_radius+equator_radius)/2, unit);  
    }     
}

std::ostream& operator<<(std::ostream& os, const PlanetRadius& obj) {
    os << "Polar radius: " << obj.m_polar_radius <<  std::endl 
        << "Equator radius: " << obj.m_equator_radius  << std::endl 
        << "Mean Radius: " << obj.m_mean_radius << " "; 

    return os; 
}