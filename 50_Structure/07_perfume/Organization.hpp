#ifndef _ORGANIZATION_HPP
#define _ORGANIZATION_HPP

#include <iostream>
#include <string>

#include "Address.hpp"

class Organization {
    private: 
        std::string m_name;
        Address m_address;
        unsigned long long m_contact;
        std::string m_email;

    public: 
        Organization(
            std::string name, 

            std::string address_line1,
            std::string city, 
            std::string district,
            unsigned int pin_code,
            std::string state, 
            std::string country,

            unsigned long long contact,
            std::string email
        );

        Organization(
            std::string name,

            std::string address_line1,
            std::string city, 
            std::string district, 
            unsigned int pin_code,
            std::string state, 
            std::string country
        );

        friend std::ostream& operator<<(std::ostream& os, const Organization& org);
};

#endif