#ifndef _PHYSICAL_CHARACTERISTICS_HPP 
#define _PHYSICAL_CHARACTERISTICS_HPP 

#include <iostream> 

#include "planet_radius.hpp" 
#include "area.hpp" 
#include "volume.hpp" 
#include "density.hpp" 
#include "temperature.hpp" 
#include "velocity.hpp"  
#include "force.hpp" 
#include "mass.hpp" 

class PhysicalCharacteristics {
    private: 
        float m_axial_tilt_in_degrees; 
        
        PlanetRadius m_radius; 
        Mass m_mass; 
        Area m_surface_area; 
        Volume m_volume; 
        Density m_density; 
        Velocity m_escape_velocity; 
        Velocity m_equatorial_rotation_velocity; 
        Velocity m_revolution_speed; 
        Temperature m_surface_temperature; 
        Force m_gravitational_force; 

    public: 
        PhysicalCharacteristics(
            double polar_radius, 
            double equator_radius, 
            length_unit_t radius_unit, 

            double mass, 
            mass_unit_t mass_unit, 

            float axial_tilt_in_degrees,

            double surface_area, 
            area_unit_t surface_area_unit, 

            double volume, 
            volume_unit_t volume_unit, 

            double density, 
            density_unit_t density_unit, 

            double escape_velocity, 
            velocity_unit_t escape_velocity_unit, 

            double equatorial_rotation_velocity, 
            velocity_unit_t equatorial_velocity_unit, 

            double revolution_velocity, 
            velocity_unit_t revolution_velocity_unit, 

            double surface_temperature, 
            temperature_unit_t surface_temperature_unit, 

            double gravitational_force, 
            force_unit_t force_unit
        ); 

        friend std::ostream& operator<<(std::ostream& os, const PhysicalCharacteristics& obj); 
}; 

#endif /* _PHYSICaL_CHARACTERISTICS_HPP */