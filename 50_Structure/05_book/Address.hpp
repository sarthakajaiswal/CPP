#ifndef _ADDRESS_HPP
#define _ADDRESS_HPP

#include <iostream>
#include <cstring>

class Address {
    private:
        std::string m_city;
        std::string m_district;
        std::string m_state;
        std::string m_country;
        unsigned int m_pin_code;
    
    public: 
        Address(
            std::string city,
            std::string district, 
            std::string state, 
            std::string country,
            unsigned int pin_code
        );
};

#endif