#include <iostream>

#include "Address.hpp"

class Organization{
    std::string m_name;
    Address m_addr;
    std::string m_email;
    unsigned long long m_contact;

    public: 
        Organization(
            std::string name,
            std::string city,
            std::string district,
            std::string state,
            std::string country,
            unsigned int pin_code,
            std::string email,
            unsigned long long contact
            );

        friend std::ostream& operator<<(std::ostream& os, const Organization& org);
};