#include <iostream>
#include "Organization.hpp"

Organization::Organization(
    std::string name, 
    std::string city,
    std::string district, 
    std::string state, 
    std::string country,
    unsigned int pin_code,
    std::string email,
    unsigned long long contact
    ) : m_name(name),
        m_addr(city, district, state, country, pin_code),
        m_email(email),
        m_contact(contact) {

}

std::ostream& operator<<(std::ostream& os, const Organization& org) {
    os << org.m_name << std::endl
        << org.m_addr << " ";
    
    if(org.m_email != "")
        os << "email: " << org.m_email;
    if(org.m_contact != 0)
        os << "contact: " << org.m_contact;

    return os;
}