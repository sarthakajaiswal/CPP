#ifndef _WASHING_POWDER_HPP 
#define _WASHING_POWDER_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "vector_template.hpp"
#include "date.hpp" 
#include "duration.hpp" 
#include "weight.hpp" 
#include "amount.hpp" 
#include "organization.hpp"

class WashingPowder {
    private: 
        std::string m_brand; 
        std::string m_colour; 

        std::vector <std::string> m_special_features; 

        Date m_manufacture_date; 
        Duration m_best_before_duration;
        Weight m_weight; 
        Amount m_mrp;  
        Organization m_marketer;
        Organization m_manufacturer;  

    public: 
        WashingPowder(
            std::string brand, 
            std::string colour, 

            std::vector<std::string> special_features, 

            unsigned int manufacture_day, 
            month_t manufacture_month, 
            unsigned int manufacture_year, 

            unsigned int best_before_duration, 
            duration_unit_t best_before_duration_unit, 

            double weight, 
            weight_unit_t weight_unit, 

            unsigned int mrp, 

            std::string marketer_name, 
            std::string marketer_address_line_1, 
            std::string marketer_address_line_2, 
            std::string marketer_address_line_3, 
            std::string marketer_district, 
            unsigned int marketer_pin_code, 
            std::string marketer_state, 
            std::string marketer_country, 
            std::string marketer_email, 
            std::vector<unsigned long long> marketer_contacts, 

            std::string manufacturer_name,
            std::string manufacturer_country,  
            std::string manufacturer_email, 
            std::vector<unsigned long long> manufacturer_contacts
        ); 

        friend std::ostream& operator<<(std::ostream& os, const WashingPowder& obj); 
}; 

#endif /*_WASHING_POWDER_HPP*/