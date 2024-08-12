#include <iostream>
#include <cstring>
#include "Address.hpp"

Address::Address(
    std::string city, 
    std::string district, 
    std::string state, 
    std::string country,
    unsigned int pin_code
) : m_city(city),
    m_district(district), 
    m_state(state), 
    m_country(country), 
    m_pin_code(pin_code) {

}

std::ostream& operator<<(std::ostream& os, const Address& address_object) {
    os << address_object.m_city << ", " 
        << address_object.m_district << ", "
        << address_object.m_state << ", "
        << address_object.m_country << ", "
        << address_object.m_pin_code;

    return os;
}