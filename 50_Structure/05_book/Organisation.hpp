#pragma once

#include <iostream>

#include "Address.hpp"

class Organisation {
    private: 
        std::string m_name;
        Address m_address;
        std::string m_email;
        unsigned long long m_contact;
    
    public:
        Organisation(std::string name, 
            std::string city, 
            std::string district, 
            std::string state, 
            std::string country,
            unsigned int pin_code,
            unsigned long long contact, 
            std::string email);
};