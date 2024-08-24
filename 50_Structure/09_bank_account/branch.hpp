#ifndef _BRANCH_HPP
#define _BRANCH_HPP

#include <iostream>
#include <cstring>

#include "address.hpp" 

class Branch{
    private: 
        Address m_address; 
        std::string m_ifsc_code;
        unsigned long long m_contact; 
        std::string m_email;  
    
    public: 
        Branch(
            std::string city, 
            std::string district, 
            unsigned int pin_code, 
            std::string state, 
            std::string ifsc_code, 
            unsigned long long m_contact, 
            std::string email
        ); 

        friend std::ostream& operator<<(std::ostream& os, const Branch& branch); 
}; 

#endif