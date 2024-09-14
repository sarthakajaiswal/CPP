#ifndef _COOKING_HPP 
#define _COOKING_HPP 

#include <iostream> 
#include <cstring> 

#include "nutritional_info.hpp" 
#include "content_info.hpp" 
#include "date.hpp" 
#include "organization.hpp" 
#include "dimention.hpp" 
#include "duration.hpp" 

enum pack_t {
    TIN, 
    CAN, BOTTLE, POUCH
}; 

class CookingOil {
    private: 
        pack_t m_pack_type; 

        unsigned long long m_price_inr; 

        std::string m_brand; 
        std::string m_source;  
        std::string m_special_note; 

        std::vector<std::string> m_ingredients; 

        NutritionalInfo m_nutritional_info; 
        ContentInfo m_content_information; 
        Date m_date_of_packing; 
        Organization m_manufacturer; 
        Duration m_best_before; 
        Dimention m_product_dimention; 

    public: 
        CookingOil(
            std::string brand, 
            std::string source,

            double volume,
            volume_unit_t volume_unit, 

            double weight, 
            weight_unit_t weight_unit, 

            unsigned short day_of_packing, 
            month_t month_of_packing, 
            unsigned short year_of_packing, 

            double best_before_duration, 
            duration_unit_t best_before_duration_unit, 

            double storage_temperature, 
            temperature_unit_t temperature_unit, 

            unsigned int price_inr, 

            std::vector<std::string> ingredients, 
            pack_t container_type, 

            double base_weight_of_oil_for_nutritional_info, weight_unit_t base_weight_of_oil_unit, 
            double energy_per_base_weight_of_oil, energy_unit_t energy_unit, 
            double carbohydrate_protein_weight_per_base_weight_of_oil, weight_unit_t carbohydrate_weight_unit, 
            double cholesterol_weight_per_base_weight_of_oil, weight_unit_t cholesterol_weight_unit,
            double fat_weight_per_base_weight_of_oil, weight_unit_t fat_weight_unit, 
            double saturated_fatty_acid_weight_per_base_weight_of_oil, weight_unit_t saturated_fatty_acid_weight_unit, 
            double unsaturated_fatty_acid_weight_per_base_weight_of_oil, weight_unit_t unsaturated_fatty_weight_acid_unit,
            double trans_fatty_acid_weight_per_base_weight_of_oil, weight_unit_t trans_fatty_acid_weight_unit, 
            //std::vector<std::tuple<std::string, double, std::string, double, weight_unit_t>> additional_nutritional_components, 

            std::string special_note, 

            std::string manufacturer_name, 
            std::string manufacturer_address_line_1,
            std::string manufacturer_address_line_2,
            std::string manufacturer_address_line_3, 
            unsigned int manufacturer_pin_code, 
            std::string manufacturer_district, 
            std::string manufacturer_state,  
            std::string manufacturer_email, 
            std::vector<unsigned long long> manufacturer_contacts, 

            double container_length, 
            double container_width, 
            double container_height, 
            dimention_unit_t dimention_unit
        ); 

        friend std::ostream& operator<<(std::ostream& os, const CookingOil& obj); 
        
}; 

std::ostream& operator<<(std::ostream& os, const pack_t& type); 

#endif /* _COOKING_OIL_HPP */