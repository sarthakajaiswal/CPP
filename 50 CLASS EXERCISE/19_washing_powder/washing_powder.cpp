#include <iostream> 
#include <cstring> 

#include "washing_powder.hpp"
#include "vector_template.hpp" 

WashingPowder::WashingPowder(
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

    unsigned int mrp_rupees, 
    
    std::string marketer_name, 
    std::string marketer_address_line_1, 
    std::string marketer_address_line_2, 
    std::string marketer_address_line_3, 
    std::string marketer_district, 
    unsigned int marketer_pin_code, 
    std::string marketer_state, 
    std::string marketer_country, 
    std::string marketer_email, 
    std::vector <unsigned long long> marketer_contacts, 

    std::string manufacturer_name, 
    std::string manufacturer_country, 
    std::string manufacturer_email, 
    std::vector <unsigned long long> manufacturer_contacts
) : 
    m_brand(brand), 
    m_colour(colour), 
    m_special_features(special_features), 
    m_manufacture_date(manufacture_day, manufacture_month, manufacture_year), 
    m_best_before_duration(best_before_duration, best_before_duration_unit), 
    m_weight(weight, weight_unit), 
    m_mrp(mrp_rupees, RUPEES), 
    m_marketer(
        marketer_name, 
        marketer_address_line_1, 
        marketer_address_line_2, 
        marketer_address_line_3, 
        marketer_district, 
        marketer_pin_code, 
        marketer_state, 
        marketer_country, 
        marketer_email, 
        marketer_contacts
    ), 
    m_manufacturer(manufacturer_name, "", manufacturer_country, manufacturer_email, manufacturer_contacts) {}

std::ostream& operator<<(std::ostream& os, const WashingPowder& obj) {
    os << "-----Washing Powder-----" << std::endl 
        << "Brand: " << obj.m_brand << std::endl 
        << "Weight: " << obj.m_weight << std::endl 
        << "Colour: " << obj.m_colour << std::endl 
        << "Mfg. date: " << obj.m_manufacture_date << std::endl 
        << "Best before " << obj.m_best_before_duration << " from date of mfg." << std::endl 
        << "Special Features: " << obj.m_special_features << std::endl 
        << "MRP: " << obj.m_mrp << std::endl 
        << "Marketed By: " << obj.m_marketer << std::endl 
        << "Manufactured By: " << obj.m_manufacturer << std::endl; 

    return os; 
}