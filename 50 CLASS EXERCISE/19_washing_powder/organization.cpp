#include <iostream> 
#include "organization.hpp" 
#include "vector_template.hpp"

Organization::Organization(
    std::string name, 

    std::string address_line_1, 
    std::string address_line_2, 
    std::string address_line_3,
    std::string district, 
    unsigned int pin_code, 
    std::string state, 
    std::string country, 

    std::string email, 
    std::vector<unsigned long long> contacts 
) : 
    m_name(name), 
    m_address(address_line_1, address_line_2, address_line_3, district, pin_code, state, country), 
    m_email(email), 
    m_contacts(contacts) {}
    
Organization::Organization(
    std::string name, 

    std::string state, 
    std::string country, 

    std::string email, 
    std::vector<unsigned long long> contacts
) :
    m_name(name), 
    m_address(state, country), 
    m_email(email), 
    m_contacts(contacts) {}

std::ostream& operator<<(std::ostream& os, const Organization& obj) {
    os << obj.m_name << ", " 
        << obj.m_address; 

    if(obj.m_email != "") 
        os << " email-" << obj.m_email;
    if(obj.m_contacts.size() != 0)
        os << " contacts-" << obj.m_contacts;
        
    return os; 
}