#include <iostream> 
#include <sstream> 

#include "solar_planet.hpp" 
#include "vector_template.hpp" 

SolarPlanet::SolarPlanet(
    std::string name, 
    unsigned short position_from_sun, 

    bool has_life, 
    unsigned int number_of_natural_satellites, 
    
    double revolution_time, duration_unit_t revolution_time_unit, 

    double apehelion, 
    double perihelion, 
    length_unit_t apehelion_perihelion_unit, 

    double polar_radius, 
    double equator_radius, 
    length_unit_t radius_unit, 
    double mass, mass_unit_t mass_unit, 
    float axial_tilt_in_degrees, 
    double surface_area, area_unit_t surface_area_unit, 
    double volume, volume_unit_t volume_unit, 
    double density, density_unit_t density_unit, 
    double escape_velocity, velocity_unit_t escape_velocity_unit, 
    double equatorial_rotation_velocity, velocity_unit_t equatorial_rotation_velocity_unit, 
    double revolution_speed, velocity_unit_t revolution_speed_unit, 
    double surface_temperature, temperature_unit_t surface_temperature_unit, 
    double gravitational_force, force_unit_t gravitational_force_unit, 

    std::vector<std::string> special_features_if_any  
) : 
    m_has_life(has_life), 
    m_name(name), 
    m_special_features_if_any(special_features_if_any), 
    m_apehelion(apehelion, apehelion_perihelion_unit), 
    m_perihelion(perihelion, apehelion_perihelion_unit), 
    m_revolution_time(revolution_time, revolution_time_unit), 
    m_physical_characteristics(
        polar_radius, equator_radius, radius_unit, 
        mass, mass_unit, 
        axial_tilt_in_degrees, 
        surface_area, surface_area_unit, 
        volume, volume_unit, 
        density, density_unit, 
        escape_velocity, escape_velocity_unit, 
        equatorial_rotation_velocity, equatorial_rotation_velocity_unit, 
        revolution_speed, revolution_speed_unit, 
        surface_temperature, surface_temperature_unit, 
        gravitational_force, gravitational_force_unit
    ) {
        if(position_from_sun < 1) {
            std::cout << "Position invalid" << std::endl; 
            m_position_from_sun = 0; 
        }
        else    
            m_position_from_sun = position_from_sun; 

        if(number_of_natural_satellites < 0) {
            std::cout << "Satellite count can't be negative" << std::endl; 
            m_number_of_known_natural_satellites = 0; 
        }
        else    
            m_number_of_known_natural_satellites = number_of_natural_satellites; 
    } 

std::string SolarPlanet::get_position_from_sun_string() const{
    if(m_position_from_sun == 1) 
        return "1st"; 
    else if(m_position_from_sun == 2)
        return "2nd"; 
    else if(m_position_from_sun == 3) 
        return "3rd"; 
    else {
        std::stringstream s; 
        s << m_position_from_sun << "th"; 
        return s.str(); 
    }
}

std::ostream& operator<<(std::ostream& os, const SolarPlanet& obj) {
    os << "-----Planet of the Solar System-----" << std::endl; 
    os << "Name: " << obj.m_name << std::endl 
        << "Do Life Exists: " << (obj.m_has_life? "Yes" : "No") << std::endl 
        << "Position_from_sun: " << obj.get_position_from_sun_string() << std::endl 
        << "Natural Satellites: " << obj.m_number_of_known_natural_satellites << std::endl 
        << "Apehelion: " << obj.m_apehelion << std::endl  
        << "Perihelion: " << obj.m_perihelion << std::endl 
        << "Revolution time: " << obj.m_revolution_time << std::endl 
        << "Physical_characteristics: " << std::endl << obj.m_physical_characteristics << std::endl 
        << "Special Features: " << obj.m_special_features_if_any << std::endl;  

    return os;         
}