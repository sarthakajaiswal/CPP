#pragma once

#include <cstdio>
#include <string>
#include <vector>

#include "ColourInfo.hpp"
#include "../05_book/ItemDimention.hpp"
#include "ItemWeight.hpp"
#include "VoltageFrequencyRange.hpp"
#include "Organization.hpp"

typedef enum power_type{
    BATTERY = 0,
    LIVE_CURRENT
}power_t;

typedef enum battery_required{
    NO=0,
    YES
}battery_required_t;

typedef enum use_location{
    INDOOR = 0,
    OUTDOOR
}location_t;

typedef enum bulb_type{
    LED = 0,
    CFL,
    TUNGSTEN
}type_t;

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec);
std::ostream& operator<<(std::ostream& os, const power_t& power);
std::ostream& operator<<(std::ostream& os, const battery_required_t& is_battery_required);
std::ostream& operator<<(std::ostream& os, const location_t& use_location);
std::ostream& operator<<(std::ostream& os, const type_t bulb_type);

class Bulb {
    private: 
        std::string m_brand;
        type_t m_type;
        std::vector <std::string> m_special_features;
        std::string m_size;
        std::string m_material;
        std::vector <std::string> m_controllers;
        std::vector <std::string> m_connection_technologies;
        std::vector <std::string> m_included_components;
        std::string m_country_of_origin;

        location_t m_indoor_or_outdoor;
        power_t m_power_source;
        battery_required_t m_battery_operable;

        unsigned int m_power;
        unsigned int m_voltage;

        ColourInfo m_colour;
        ItemWeight m_weight;
        ItemDimention m_product_dimentions;
        VoltageFrequencyRange m_acceptable_voltage_frequency; 
        Organization m_manufacturer;

    public: 
        Bulb(
            std::string brand,
            type_t bulb_type,
            std::vector<std::string> m_special_features,
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
            ); 

        friend std::ostream& operator<<(std::ostream& os, const Bulb& bulb);      
};