#include "smartphone.hpp"

SmartPhone::SmartPhone(
   std::string vendor, 
   std::string model, 
   std::string colour, 

   std::string cpu_model, 
   unsigned short cpu_number_of_cores, 
   unsigned short cpu_speed_ghz, 

   unsigned short ram, 
   sunit_t ram_unit, 
   unsigned short rom, 
   sunit_t rom_unit, 

   std::string os, 
   std::string os_version, 

   float weight_kgs, 
   float display_size_cms, 
   int battery_power, 

   std::vector<BoxComponent> included_components, 

   float length, 
   float breadth, 
   float height, 
   dunit_t dimention_unit, 

   float review, 
   unsigned long long total_number_of_reviews, 

   unsigned int price_inr 
) : m_vendor(vendor), 
    m_model(model), 
    m_colour(colour), 

    m_included_components(included_components), 
    m_weight_kgs(weight_kgs), 
    m_display_cms(display_size_cms), 
    m_battery_power(battery_power), 

    m_RAM(ram, ram_unit), 
    m_ROM(rom, rom_unit), 
    m_operating_system(os, os_version), 
    m_cpu(cpu_model, cpu_number_of_cores, cpu_speed_ghz), 
    m_product_dimention(length, breadth, height, dimention_unit), 
    m_review(review, total_number_of_reviews), 
    m_price_inr(price_inr) {

    }

SmartPhone::SmartPhone(
    std::string vendor, 
    std::string model, 
    std::string colour, 

    std::string cpu_model, 
    
    unsigned short ram, 
    sunit_t ram_unit, 
    unsigned short rom, 
    sunit_t rom_unit, 

    std::string os, 
    std::string os_version, 

    float weight_kgs, 
    float display_size_cms, 
    int battery_power, 

    std::vector<BoxComponent> included_components, 

    float length, 
    float breadth, 
    float height, 
    dunit_t dimention_unit,

    float review, 
    unsigned long long total_number_of_reviews, 

    unsigned int price_inr 
) : m_vendor(vendor), 
    m_model(model), 
    m_colour(colour), 

    m_included_components(included_components), 

    m_weight_kgs(weight_kgs), 
    m_display_cms(display_size_cms), 
    m_battery_power(battery_power), 

    m_RAM(ram, ram_unit), 
    m_ROM(rom, rom_unit), 
    m_operating_system(os, os_version),
    m_cpu(cpu_model), 
    m_product_dimention(length, breadth, height, dimention_unit), 
    m_review(review, total_number_of_reviews), 
    m_price_inr(price_inr) {

    }

std::ostream& operator<<(std::ostream& os, const SmartPhone& obj) {
    os << "Smartphone Information : " << std::endl
        << "Name : " << obj.m_vendor << " " << obj.m_model << std::endl
        << "Colour: " << obj.m_colour << std::endl 
        << "Processor: " << obj.m_cpu << std::endl
        << "Weight: " << obj.m_weight_kgs << " kg" << std::endl 
        << "Display Size: " << obj.m_display_cms << " cms" << std::endl 
        << "Battery power: " << obj.m_battery_power << " mAH" << std::endl
        << "RAM: " << obj.m_RAM << std::endl 
        << "ROM: " << obj.m_ROM << std::endl 
        << "Operating System: " << obj.m_operating_system << std::endl  
        << "Included Components: " << obj.m_included_components << std::endl 
        << "Product Dimention: " << obj.m_product_dimention << std::endl 
        << "Price: " << obj.m_price_inr << " Rs" << std::endl 
        << "Reviews: " << obj.m_review << std::endl;

    return os; 
}

std::ostream& operator<<(std::ostream& os, const std::vector<BoxComponent>& obj) {
    int size = obj.size(); 

    int i=0; 
    while(i<size) {
        os << obj[i];
        if(i != size-1)
            os << ", ";
    
        i++;
    }

    return os; 
}