#ifndef _COOLER_HPP 
#define _COOLER_HPP 

#define NO  0
#define YES 1

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "dimention.hpp" 
#include "motor_specifications.hpp"
#include "current_parameters.hpp"  
#include "weight.hpp" 
#include "organization.hpp"

enum grass_t {
	GRASS, HONEYCOMB
};
	
enum cooler_t {
	DESERT_COOLER, PERSONAL_COOLER, 
	TOWER_COOLER, ROOM_COOLER, WINDOW_COOLER
}; 

class Cooler {
    private: 
        bool m_is_tub_separable; 

        grass_t m_cooler_grass_type; 
        cooler_t m_cooler_type; 

        float m_tub_capacity_liters; 
        unsigned int m_price_inr; 

        std::string m_brand_and_model_name; 
        std::string m_body_material;
        std::string m_fan_blade_material; 
        std::string m_colour; 

        Dimention m_item_dimention;
        MotorSpecifications m_motar_specification; 
        Organization m_manufacturer; 
		Organization m_marketer; 
        Weight m_weight; 

        std::vector<std::string> m_special_features; 

    public: 
        Cooler(
            std::string brand_and_model_name, 
            cooler_t cooler_type, 
            grass_t cooler_grass_type, 

            float tub_capacity_liters, 

            std::string motar_winding_material,  
            double motar_working_voltage, 
            voltage_unit_t working_voltage_unit, 
            double motar_working_current,
            current_unit_t working_current_unit, 
            unsigned short motar_current_frequency,
            frequency_unit_t motar_current_frequency_unit,  
            CurrentParameter::current_t motar_current_type, 
            unsigned int motar_rpm,

            bool is_tub_separable, 

            std::string body_material, 
            std::string fan_blade_material, 
            std::string colour, 

            unsigned int price_inr, 

            float cooler_dimention_1, 
            float cooler_dimention_2, 
            float cooler_dimention_3, 
            dimention_unit_t dimention_unit, 
            dimention_format_t dimention_format, 

            std::string manufacturer_name, 
            std::string manufacturer_city,
            unsigned int manufacturer_pin_code,  
            std::string manufactuter_district, 
            std::string manufacturer_state, 
			
			std::string marketer_name, 
			std::string marketer_city,
			unsigned int marketer_pin_code, 
			std::string marketer_district, 
			std::string marketer_state, 
            std::string marketer_email, 
            std::string marketer_website, 
            std::vector<unsigned long long> marketer_contacts, 

            double cooler_weight, 
            weight_unit_t weight_unit, 
			
			std::vector<std::string> special_features
        ); 

        friend std::ostream& operator<<(std::ostream& os, const Cooler& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const cooler_t& cooler_type); 
std::ostream& operator<<(std::ostream& os, const grass_t& grass_type); 

#endif /* _COOLER_HPP */
