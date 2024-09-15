#ifndef _PLANET_HPP 
#define _PLANET_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 

#define YES true 
#define NO  false 

#include "length.hpp" 
#include "duration.hpp" 
#include "physical_characteristics.hpp" 

class SolarPlanet {
    private:
        bool m_has_life;
        unsigned int m_number_of_known_natural_satellites;  
        unsigned short m_position_from_sun;

        std::string m_name; 
        std::vector<std::string> m_special_features_if_any; 

        Length m_apehelion; 
        Length m_perihelion;  
        Duration m_revolution_time; 
        PhysicalCharacteristics m_physical_characteristics; 

    public: 
        SolarPlanet(
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
            double surface_area, area_unit_t surfase_are_unit, 
            double volume, volume_unit_t volume_unit, 
            double density, density_unit_t density_unit, 
            double escape_velocity, velocity_unit_t escape_valocity_unit, 
            double equatorial_rotation_velocity, velocity_unit_t rotation_velocity, 
            double revolution_velocity, velocity_unit_t revolution_velocity_unit, 
            double surface_temperature, temperature_unit_t surface_temperature_unit, 
            double gravitational_force, force_unit_t gravitational_force_unit, 

            std::vector<std::string> special_features_if_any
        ); 

        std::string get_position_from_sun_string() const; 

        friend std::ostream& operator<<(std::ostream& os, const SolarPlanet& obj); 
}; 

#endif /* _SOLAR_PLANET_HPP */ 