#ifndef _ORGANIZATION_HPP 
#define _ORGANIZATION_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "address.hpp" 

class Organization{
    private: 
        std::string m_name; 
        std::string m_email; 
        std::string m_website; 

        Address m_address; 

        std::vector<unsigned long long> m_contacts; 

    public: 
        Organization(
            std::string name, 

            std::string address_line_1, 
            std::string address_line_2, 
            std::string address_line_3, 
            unsigned int pin_code, 
            std::string district, 
            std::string state, 
            std::string country, 
            
            std::string email, 
            std::string website, 
            std::vector<unsigned long long> contacts
        ); 

        Organization(std::string name); 

        friend std::ostream& operator<<(std::ostream& os, const Organization& org); 
}; 

#endif /* _ORGANIZATION_HPP */