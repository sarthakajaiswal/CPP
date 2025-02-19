#include <iostream>
#include <string>

#include "Organization.hpp"

Organization::Organization(
    std::string name,
    
    std::string address_line1,
    std::string city, 
    std::string district,
    unsigned int pin_code, 
    std::string state, 
    std::string country,

    unsigned long long contact,
    std::string email
) : m_name(name),
    m_address(address_line1, city, district, pin_code, state, country),
    m_contact(contact),
    m_email(email) {

    }

Organization::Organization(
    std::string name, 

    std::string address_line1,
    std::string city, 
    std::string district, 
    unsigned int pin_code,
    std::string state, 
    std::string country 
) : m_name(name), 
    m_address(address_line1, city, district, pin_code, state, country), 
    m_contact(0) {

    }

std::ostream& operator<<(std::ostream& os, const Organization& org) {
    os << org.m_name << ", "
        << org.m_address;

    if(org.m_contact != 0 )
        os << ", contact-" << org.m_contact;

    if(org.m_email != "")
        os << ", email-" << org.m_email;

    return os;
}
