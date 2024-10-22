#include <iostream> 
#include "organization.hpp" 
#include "vector_template.hpp"

Organization::Organization(std::string name) : m_name(name) {} 
Organization::Organization(
    std::string name, 

    std::string address_line_1, 
    std::string address_line_2, 
    std::string address_line_3, 
    unsigned int pin_code, 
    std::string district, 
    std::string state, 
    std::string country, 

    std::string email, 
    std::string website, 
    std::vector<unsigned long long> contacts
) : m_name(name), m_email(email), m_website(website), m_contacts(contacts), 
    m_address(
        address_line_1, address_line_2, address_line_3, 
        pin_code, district, state, country
    ) {} 

std::ostream& operator<<(std::ostream& os, const Organization& org) {
    bool comma_flag = false; 
    if(org.m_name != "") {
        os << org.m_name; 
        comma_flag = true; 
    }  
    
    if(org.m_address.is_address_empty() == false) {
        if(comma_flag)
            os << ","; 
        else 
            comma_flag = true;  
        os << " address: " << org.m_address; 
    } 

    if(org.m_email != "") {
        if(comma_flag)
            os << ","; 
        else 
            comma_flag = true; 
        os << " email" << org.m_email; 
    }
    if(org.m_website != "") {
        if(comma_flag)
            os << ","; 
        else 
            comma_flag = true; 
        os << "website" << org.m_website; 
    }
    if(org.m_contacts.size() > 0) {
        if(comma_flag)
            os << ","; 
        os << " contact: " << org.m_contacts; 
    }
    
    return os; 
} 