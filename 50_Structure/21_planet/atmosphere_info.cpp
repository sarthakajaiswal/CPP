#include <iostream> 
#include "atmosphere_info.hpp" 

AtmosphereInfo::AtmosphereInfo(
    double surface_pressure_value, 
    pressure_unit_t pressure_unit, 
    double scale_height, 
    length_unit_t height_unit

    // compatible parameter for std::vector<Composition> m_elements; 
) : 
    m_surface_pressure(surface_pressure_value, pressure_unit), 
    // m_element_composition(), 
    m_scale_height(scale_height, height_unit) {} 

std::ostream& operator<<(std::ostream& os, const AtmosphereInfo& obj) {
    os << "Surface Pressure: " << obj.m_surface_pressure << std::endl 
        << "Atmospehre scale Height: " << obj.m_scale_height; 
    // os << "Element Composition: " << m_element_composition; 
    
    return os; 
}