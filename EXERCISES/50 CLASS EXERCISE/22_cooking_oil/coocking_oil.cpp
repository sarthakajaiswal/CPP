#include <iostream> 
#include "cooking_oil.hpp" 
#include "vector_template.hpp" 

CookingOil::CookingOil(
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

    double base_weight_of_oil_for_nutritional_info, 
    weight_unit_t base_weight_of_oil_unit, 
    double energy_per_base_weight_of_oil, 
    energy_unit_t energy_unit, 
    double carbohydrate_protein_per_base_weight_of_oil, 
    weight_unit_t carbohydrate_protein_weight_unit, 
    double cholesterol_per_base_weight_of_oil, 
    weight_unit_t cholesterol_weight_unit, 
    double fat_per_base_weight_of_oil, 
    weight_unit_t fat_weight_unit, 
    double saturated_fatty_acid_per_base_weight_of_oil, 
    weight_unit_t saturated_fatty_acid_weight_unit, 
    double unsaturated_fatty_acid_per_base_weight_of_oil, 
    weight_unit_t unsaturated_fatty_acid_weight_unit, 
    double trans_fatty_acid_per_base_weight_of_oil, 
    weight_unit_t trans_fatty_acid_weight_unit, 
    // std::vector<std::tuple<std::string, double, std::string, double, weight_unit_t>> additional_nutritions, 

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
) :
    m_pack_type(container_type), 
    m_price_inr(price_inr), 
    m_brand(brand), 
    m_source(source), 
    m_special_note(special_note), 
    m_ingredients(ingredients), 
    m_nutritional_info(
        base_weight_of_oil_for_nutritional_info, 
        base_weight_of_oil_unit, 
        energy_per_base_weight_of_oil, 
        energy_unit, 
        carbohydrate_protein_per_base_weight_of_oil, 
        carbohydrate_protein_weight_unit, 
        cholesterol_per_base_weight_of_oil, 
        cholesterol_weight_unit, 
        fat_per_base_weight_of_oil, 
        fat_weight_unit, 
        saturated_fatty_acid_per_base_weight_of_oil, 
        saturated_fatty_acid_weight_unit, 
        unsaturated_fatty_acid_per_base_weight_of_oil, 
        unsaturated_fatty_acid_weight_unit, 
        trans_fatty_acid_per_base_weight_of_oil, 
        trans_fatty_acid_weight_unit 
        // added_vitamins 
        ), 
        m_content_information(
            storage_temperature, temperature_unit, 
            volume, volume_unit, 
            weight, weight_unit 
        ), 
        m_date_of_packing(day_of_packing, month_of_packing, year_of_packing), 
        m_manufacturer(
            manufacturer_name, 
            manufacturer_address_line_1, 
            manufacturer_address_line_2, 
            manufacturer_address_line_3, 
            manufacturer_pin_code, 
            manufacturer_district, 
            manufacturer_state, 
            "", 
            manufacturer_email, 
            manufacturer_contacts 
        ), 
        m_best_before(best_before_duration, best_before_duration_unit), 
        m_product_dimention(container_length, container_width, container_height, dimention_unit) {}


std::ostream& operator<<(std::ostream& os, const CookingOil& obj) {
    os << "-----COOKING OIL-----" << std::endl; 

    os << "Brand: " << obj.m_brand << std::endl  
        << "Sorce: " << obj.m_source << std::endl 
        << "Content: " << obj.m_content_information << std::endl 
        << "Date of Packing: " << obj.m_date_of_packing << std::endl 
        << "Best before " << obj.m_best_before << " from date of packing" << std::endl 
        << "Price: " << "Rs. " << obj.m_price_inr << std::endl 
        << "Ingredients: " << obj.m_ingredients << std::endl 
        << "Container Type: " << obj.m_pack_type << std::endl 
        << "Dimentions: " << obj.m_product_dimention << std::endl 
        << "Nutritional Information: " << std::endl << obj.m_nutritional_info << std::endl 
        << "Manufacturer: " << std::endl << obj.m_manufacturer << std::endl 
        << obj.m_special_note << std:: endl; 

    return os; 
}

std::ostream& operator<<(std::ostream& os, const pack_t& type) {
    switch (type) {
        case BOTTLE: 
            os << "Bottle"; 
            break; 
        case POUCH: 
            os << "Pounch"; 
            break; 
        case CAN: 
            os << "Can"; 
            break; 
        case TIN: 
            os << "Tin"; 
    }

    return os; 
}