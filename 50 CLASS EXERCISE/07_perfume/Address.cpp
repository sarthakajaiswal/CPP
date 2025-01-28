#include <iostream>
#include <string> 

#include "Address.hpp"

Address::Address(
    string line1,
    string city, 
    string district,
    unsigned int pin_code, 
    string state, 
    string country
) : m_line1(line1), 
    m_city(city),
    m_district(district),
    m_pin_code(pin_code),
    m_state(state),
    m_country(country) {

    }

Address::Address(
    string city, 
    string district,
    unsigned int pin_code,
    string state,
    string country
) : m_city(city),
    m_district(district),
    m_pin_code(pin_code),
    m_state(state) {

    }

std::ostream& operator<<(std::ostream& os, const Address& addr) {
    if(addr.m_line1 != "")
        os << addr.m_line1;

    os << addr.m_city << ", "
        << addr.m_district << ", "
        << addr.m_pin_code << ", "
        << addr.m_state << ", "
        << addr.m_country;

    return os;
}