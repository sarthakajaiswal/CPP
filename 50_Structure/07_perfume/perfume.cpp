#include <iostream>
#include <string>
#include <vector>

#include "perfume.hpp"

Perfume::Perfume(
    std::string name,
    std::string brand,
    unsigned int quantity_ml,
    unsigned int price_inr,

    unsigned short manufactured_month,
    unsigned short manufactured_year,
    unsigned short expiry_month,
    unsigned short expiry_year,

    std::string manufacturer_name,
    std::string manufacturer_address_line1,
    std::string manufacturer_city,
    std::string manufacturer_district,
    unsigned int manufacturer_pin_code,
    std::string manufacturer_state,
    std::string manufacturer_country,

    std::string marketer_name,
    std::string marketer_address_line1,
    std::string marketer_city,
    std::string marketer_district,
    unsigned int marketer_pin_code,
    std::string marketer_state,
    std::string marketer_country,

    std::string customer_care_name,
    unsigned long long customer_care_contact,
    std::string customer_care_email,
    std::string customer_care_address_line1,
    std::string customer_care_city,
    std::string customer_care_district,
    unsigned int customer_care_pin_code,
    std::string customer_care_state,
    std::string customer_care_country
) : m_name(name),
    m_brand(brand),
    
    m_manufacture_date(manufactured_month, manufactured_year),
    m_expiry_date(expiry_month, expiry_year),
    
    m_manufacturer(manufacturer_name, manufacturer_address_line1, manufacturer_city, manufacturer_district, manufacturer_pin_code, manufacturer_state, manufacturer_country),
    m_marketer(marketer_name, marketer_address_line1, marketer_city, marketer_district, marketer_pin_code, marketer_state, marketer_country),
    m_customer_care(customer_care_name, customer_care_address_line1, customer_care_city, customer_care_district, customer_care_pin_code, customer_care_state, customer_care_country, customer_care_contact, customer_care_email),

    m_quantity_ml(quantity_ml),
    m_price_inr(price_inr) { 

}

void Perfume::set_perfume_contents(const std::vector<std::string>& contents) {
    this->m_contents = contents;    
}

std::ostream& operator<<(std::ostream& os, const Perfume& my_perfume) {
    os << "Perfume details: " << std::endl;

    os << "Name: " << my_perfume.m_name << std::endl
        << "Brand: " << my_perfume.m_brand << std::endl;

    if(my_perfume.m_contents.size() != 0)
        os << "Contents: " << my_perfume.m_contents << std::endl;

    os << "Quantity: " << my_perfume.m_quantity_ml << " ml" << std::endl
        << "Manufacture Date: " << my_perfume.m_manufacture_date << std::endl
        << "Expiry Date: " << my_perfume.m_expiry_date << std::endl
        << "Manufactured By: : " << my_perfume.m_manufacturer << std::endl
        << "Marketed By: " << my_perfume.m_marketer << std::endl 
        << "Customer Care: " << my_perfume.m_customer_care <<std::endl 
        << "Price: " << my_perfume.m_price_inr << " Rs" << std::endl;

    return os;
}

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec) {
    int size = vec.size();
    
    int i=0;
    while(i<size) {
        std::cout << vec[i];
        if(i != size-1)
            std::cout << ", ";
        
        i++;
    }

    return os;
}
