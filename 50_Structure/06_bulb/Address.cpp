#include <iostream>
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

std::ostream& operator<<(std::ostream& os, const Address& addr) {
    os << addr.m_city;
    if(addr.m_district != "")
        os << ", " << addr.m_district;
    if(addr.m_state != "")
        os << ", " << addr.m_state;
    if(addr.m_country != "")
        os << ", " << addr.m_country;
    if(addr.m_pin_code != 0)
        os << ", " << "pin code : " << addr.m_pin_code;   

    return os;
}