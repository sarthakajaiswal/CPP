#include <iostream>
#include <cstring>

#include "washing_machine.hpp"

WashingMachine::WashingMachine(
    std::string brand, 
    std::string model, 
    std::string colour, 
    std::string access_location, 

    console_t console, 

    std::vector<std::string> special_feature, 

    std::string country_origin, 

    float weight_pounds, 
    unsigned int price_inr, 
    float capacity_pounds, 
    int max_spin_speed, 
    bool batteries_required, 
    short required_voltage_volts, 
    current_t current_type, 
    short required_wattage_watts, 

    float length, 
    float breadth, 
    float height, 
    std::string dimention_unit, 

    std::string marketer_name, 
    std::string marketer_address_line_1, 
    std::string marketer_address_line_2,
    std::string marketer_address_line_3, 
    unsigned int marketer_pin_code, 
    unsigned long long marketer_contact, 
    std::string marketer_email, 

    std::string manufacturer_name, 
    std::string manufacturer_address_line_1, 
    std::string manufacturer_address_line_2, 
    std::string manufacturer_address_line_3,
    unsigned int manufacturer_pin_code, 
    unsigned long long manufacturer_contact, 
    std::string manufacturer_email, 

    float review, 
    unsigned short review_max_value, 
    unsigned long long total_reviews, 

    unsigned short selling_rank, 
    std::string selling_rank_category 
) : m_brand(brand), 
    m_model(model), 
    m_country_origin(country_origin), 
    m_colour(colour), 
    m_access_location(access_location), 
    
    m_console(console), 
    m_special_features(special_feature), 
    
    m_weight_pounds(weight_pounds), 
    m_price_inr(price_inr), 
    m_capacity_pounds(capacity_pounds), 
    m_max_spin_speed_rpm(max_spin_speed), 
    m_batteries_required(batteries_required), 
    m_required_voltage_volts(required_voltage_volts), 
    m_current_type(current_type), 
    m_required_wattage_watts(required_wattage_watts), 
    
    m_product_dimention(length, breadth, height, dimention_unit), 
    m_marketer(marketer_name, marketer_address_line_1, marketer_address_line_2, marketer_address_line_3, marketer_pin_code, marketer_contact, marketer_email),
    m_manufacturer(manufacturer_name, manufacturer_address_line_1, manufacturer_address_line_2, manufacturer_address_line_3, manufacturer_pin_code, manufacturer_contact, manufacturer_email), 
    m_customer_review(review, review_max_value, total_reviews), 
    m_top_selling_rank(selling_rank, selling_rank_category) {

    }

std::ostream& operator<<(std::ostream& os, const WashingMachine& obj) {
    os << "WASHING MACHINE" << std::endl 
        << "Brand: " << obj.m_brand << std::endl 
        << "Model: " << obj.m_model << std::endl 
        << "Colour: " << obj.m_colour << std::endl 
        << "Access location: " << obj.m_access_location << std::endl 
        << "Console type: " << obj.m_console << std::endl 
        << "Special Features: " << obj.m_special_features << std::endl 
        << "Country Origin: " << obj.m_country_origin << std::endl 
        << "Weight: " << obj.m_weight_pounds << " pounds" << std::endl 
        << "Capacity: " << obj.m_capacity_pounds << " pounds" << std::endl 
        << "Max. Spin speed: " << obj.m_max_spin_speed_rpm << " rpm" << std::endl
        << "Batteries required: " << ((obj.m_batteries_required==1) ? "Yes" : "No") << std::endl 
        << "Required Voltage: " << obj.m_required_voltage_volts << " V" << " (" << obj.m_current_type << ")" << std::endl
        << "Wattage: " << obj.m_required_wattage_watts << " Watts" << std::endl 
        << "Product Dimention: " << obj.m_product_dimention << std::endl  
        << "Price: " << obj.m_price_inr << " INR" << std::endl 
        << "Marketed by: " << obj.m_marketer << std::endl 
        << "Manufactured by: " << obj.m_manufacturer << std::endl 
        << "Reviews: " << obj.m_customer_review << std::endl 
        << "Top Selling Rank: " << obj.m_top_selling_rank << std::endl; 

    return os;  
}

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec) {
    unsigned int i; 
    unsigned int size; 

    i=0;
    size = vec.size();  
    while(i<size) {
        std::cout << vec[i]; 
        if(i<size-1)
            os << ", "; 

        i++; 
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const console_t& console) {
    switch(console) {
        case 0: 
            os << "PushButton"; 
            break; 

        case 1: 
            os << "TouchPad";
            break; 

        case 2: 
            os << "Remote Control"; 
            break;  
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const current_t& current) {
    if(current) 
        os << "DC"; 
    else 
        os << "AC"; 

    return os; 
}