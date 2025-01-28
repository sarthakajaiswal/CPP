#ifndef _ADDRESS_HPP
#define _ADDRESS_HPP

#include <iostream>
#include <string>

typedef std::string string;

class Address{
    private: 
        string m_line1;
        string m_city;
        string m_district;
        string m_state;
        string m_country;

        unsigned int m_pin_code;

    public: 
        Address(string line1, string city, string district, unsigned int pin_code, string state, string country);
        Address(string city, string district, unsigned int pin_code, string state, string country);

        friend std::ostream& operator<<(std::ostream& os, const Address& addr);
};

#endif