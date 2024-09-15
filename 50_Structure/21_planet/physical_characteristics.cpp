#include <iostream> 
#include "physical_characteristics.hpp" 

PhysicalCharacteristics::PhysicalCharacteristics(
    double polar_radius, 
    double equator_radius, 
    length_unit_t radius_length_unit, 

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
    velocity_unit_t equatorial_rotation_velocity_unit, 

    double revolution_speed, 
    velocity_unit_t revolution_speed_unit, 

    double surface_temperature, 
    temperature_unit_t surface_temperature_unit, 

    double gravitational_force, 
    force_unit_t gravitational_force_unit 
) : 
    m_axial_tilt_in_degrees(axial_tilt_in_degrees), 
    m_radius(polar_radius, equator_radius, radius_length_unit), 
    m_mass(mass, mass_unit), 
    m_surface_area(surface_area, surface_area_unit), 
    m_volume(volume, volume_unit), 
    m_density(density, density_unit), 
    m_escape_velocity(escape_velocity, escape_velocity_unit), 
    m_equatorial_rotation_velocity(equatorial_rotation_velocity, equatorial_rotation_velocity_unit), 
    m_revolution_speed(revolution_speed, revolution_speed_unit), 
    m_surface_temperature(surface_temperature, surface_temperature_unit), 
    m_gravitational_force(gravitational_force, gravitational_force_unit) {
}

std::ostream& operator<<(std::ostream& os, const PhysicalCharacteristics& obj) {
    os << "Radius: " << std::endl << obj.m_radius << std::endl 
        << "Axial tilt: " << obj.m_axial_tilt_in_degrees << " degree" << std::endl 
        << "Mass: " << obj.m_mass << std::endl 
        << "Surface area: " << obj.m_surface_area << std::endl  
        << "Volume: " << obj.m_volume << std::endl 
        << "Density: " << obj.m_density << std::endl 
        << "Escape velocity: " << obj.m_escape_velocity << std::endl 
        << "Rotation Velocity (Equatorial): " << obj.m_equatorial_rotation_velocity << std::endl 
        << "Revolution Speed: " << obj.m_revolution_speed << std::endl 
        << "Surface Temperature: " << obj.m_surface_temperature << std::endl 
        << "Gravitational Force: " << obj.m_gravitational_force; 
        
    return os; 
}