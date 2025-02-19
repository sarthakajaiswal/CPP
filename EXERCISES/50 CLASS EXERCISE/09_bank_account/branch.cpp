#include <iostream>
#include <cstring> 

#include "branch.hpp"

Branch::Branch(
    std::string city, 
	std::string district,
	unsigned int pin_code, 
	std::string state, 
    std::string ifsc_code,
    unsigned long long contact,
    std::string email
) : 
    m_address(city, district, pin_code, state), 
    m_ifsc_code(ifsc_code), 
    m_contact(contact), 
    m_email(email) {

    }

std::ostream& operator<<(std::ostream& os, const Branch& branch) {
    os << branch.m_address
        << "IFSC code - " << branch.m_ifsc_code; 

    if(branch.m_email != "")
        os << ", email - " << branch.m_email; 

        os << ", tel - " << branch.m_contact;  
		
	return os; 
}

