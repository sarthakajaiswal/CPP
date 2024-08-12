#include <iostream>
#include <cstring>

#include "Organisation.hpp"
#include "Address.hpp"

Organisation::Organisation(std::string name, 
    std::string city, 
    std::string district, 
    std::string state, 
    std::string country,
    unsigned int pin_code,
    unsigned long long contact_number, 
    std::string email) 
        : m_name(name),
        m_address(city, district, state, country, pin_code),
        m_email(email),
        m_contact(contact_number) {

        } 

std::ostream& operator<<(std::ostream& os, const Organisation& organisation_obj) {
    os << organisation_obj.m_name << ", "
        << organisation_obj.m_address;
    if(organisation_obj.m_contact > 0)
        os << ", contact : " << organisation_obj.m_contact;
    if(organisation_obj.m_email != "")
        os << ", email : " << organisation_obj.m_email;

    return os;
}