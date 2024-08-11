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