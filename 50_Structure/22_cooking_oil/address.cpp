#include <iostream> 
#include "address.hpp"

Address::Address() : 
    m_pin_code(0) {} 

Address::Address(std::string country) : 
    m_country(country) {}

Address::Address(std::string state, std::string country) : 
    m_state(state), m_country(country), m_pin_code(0) {}

Address::Address(
    std::string address_line_1, 
    std::string address_line_2, 
    std::string address_line_3, 
    unsigned int pin_code, 
    std::string district, 
    std::string state, 
    std::string country 
) :
    m_address_line_1(address_line_1), 
    m_address_line_2(address_line_2), 
    m_address_line_3(address_line_3), 
    m_district(district), 
    m_pin_code(pin_code), 
    m_state(state), 
    m_country(country) {} 

std::ostream& operator<<(std::ostream& os, const Address& obj) {
    bool comma_flag = false; 

    if(obj.m_address_line_1 != "") {
        os << obj.m_address_line_1; 
        comma_flag=true; 
    } 
    if(obj.m_address_line_2 != "") {
        if(comma_flag)
            os << ", "; 
        else    
            comma_flag = true; 
        os << obj.m_address_line_2;
    }
    if(obj.m_address_line_3 != "") {
        if(comma_flag) 
            os << ", ";  
        else    
            comma_flag = true; 
        os << obj.m_address_line_3; 
    }
    if(obj.m_pin_code != 0) {
        if(comma_flag)
            os << ", "; 
        else    
            comma_flag = true; 
        os << "pin code - " << obj.m_pin_code; 
    }
    if(obj.m_district != "") {
        if(comma_flag)
            os << ", "; 
        else 
            comma_flag = true; 
        os << "dist - " << obj.m_district; 
    }
    if(obj.m_state != "") {
        if(comma_flag)
            os << ", "; 
        else  
            comma_flag = true; 
        os << obj.m_state; 
    }
    if(obj.m_country != "")  
        obj.m_country; 

    return os; 
}