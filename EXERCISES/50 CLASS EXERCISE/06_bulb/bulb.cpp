#include <iostream>
#include <string>
#include <vector>

#include "bulb.hpp"

Bulb::Bulb(
    std::string brand,
    type_t bulb_type,
    std::vector<std::string> special_features,
    std::string size,
    std::string material,
    std::vector<std::string> controllers,
    std::vector<std::string> connection_technologies,
    std::vector<std::string> components,
    std::string country_of_origin,

    location_t usage_location,
    power_t power_source,
    battery_required_t is_battery_operable,

    unsigned int power,
    unsigned int voltage,

    short red_part,
    short green_part, 
    short blue_part, 
    float opacity, 
    float brightness_lumens, 
    float temperature,

    float weight,
    std::string weight_unit,

    float length, 
    float breadth,
    float height, 
    std::string unit,

    float freq_min_val,
    float freq_max_val,
    std::string freq_unit,

    std::string org_name,
    std::string org_city,
    std::string org_district, 
    std::string org_state, 
    std::string org_country, 
    unsigned int org_pin_code,
    std::string org_email,
    unsigned long long org_contact
    ) : m_brand(brand), 
        m_type(bulb_type),
        m_special_features(special_features),
        m_size(size),
        m_material(material),
        m_controllers(controllers),
        m_connection_technologies(connection_technologies),
        m_included_components(components),
        m_country_of_origin(country_of_origin),

        m_indoor_or_outdoor(usage_location),
        m_power_source(power_source), 
        m_battery_operable(is_battery_operable),

        m_power(power),
        m_voltage(voltage),

        m_colour(red_part, green_part, blue_part, opacity, brightness_lumens, temperature),
        m_weight(weight, weight_unit),

        m_product_dimentions(length, breadth, height, unit),
        m_acceptable_voltage_frequency(freq_min_val, freq_max_val, freq_unit),

        m_manufacturer(org_name, org_city, org_district, org_state, org_country, org_pin_code, org_email, org_contact) {

}

std::ostream& operator<<(std::ostream& os, const Bulb& bulb) {
    os << "Bulb Information: " << std::endl;

    os << "Company: " << bulb.m_brand << std::endl 
        << "Bulb Type: " << bulb.m_type << std::endl
        << "Special Features: " << bulb.m_special_features << std::endl
        << "Size: " << bulb.m_size << std::endl
        << "Material: " << bulb.m_material << std::endl
        << "Controls: " << bulb.m_controllers << std::endl
        << "Connection technologies: " << bulb.m_connection_technologies << std::endl
        << "Components: " << bulb.m_included_components << std::endl
        << "Usage: " << bulb.m_indoor_or_outdoor << std::endl
        << "Power source: " << bulb.m_power_source << std::endl
        << "Battery operable: " << bulb.m_battery_operable << std::endl
        << "Power: " << bulb.m_power << " watts" << std::endl
        << "Voltage: " << bulb.m_voltage << " V" << std::endl
        << "Voltage Frequency: " << bulb.m_acceptable_voltage_frequency << std::endl
        << "Light Colour: " << bulb.m_colour << std::endl
        << "Item weight: " << bulb.m_weight << std::endl
        << "Dimentions: " << bulb.m_product_dimentions << std::endl
        << "Country Origin: " << bulb.m_country_of_origin << std::endl
        << "Manufacturer : " << bulb.m_manufacturer << std::endl; 

    return os;
}

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec) {
    int i = 0;
    while(i<vec.size()) {
        std::cout << vec[i];
        if(i<vec.size()-1)
            std::cout << ", ";
        ++i;
    }

    return os;
}

std::ostream& operator<<(std::ostream& os, const power_t& power) {
    if(power)
        os << "Live Current";
    else    
        os << "Battery";

    return os;
}

std::ostream& operator<<(std::ostream& os, const battery_required_t& is_battery_required) {
    if(is_battery_required)
        os << "Yes";
    else
        os << "No";
    
    return os;
}

std::ostream& operator<<(std::ostream& os, const location_t& use_location) {
    if(use_location)
        os << "Outdoor";
    else
        os << "Indoor";

    return os;
}

std::ostream& operator<<(std::ostream& os, const type_t bulb_type) {
    switch(bulb_type) {
        case 0:
            os << "LED";
            break;
        
        case 1:
            os << "CFL";
            break;
        
        case 2:
            os << "Tungsten Bulb";
            break;
    }

    return os;
}