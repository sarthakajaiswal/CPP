#include <iostream> 
#include <cstring> 

#include "organization.hpp" 

Organization::Organization(
	std::string name, 
	
    std::string address_line_1, 
	std::string address_line_2, 
	std::string address_line_3, 
	std::string district, 
	unsigned int pin_code, 
	std::string state, 
	std::string country 
) : 
	m_name(name), 
	m_address(address_line_1, address_line_2, address_line_3, district, pin_code, state, country) {

}

std::ostream& operator<<(std::ostream& os, const Organization& obj) {
	os << obj.m_name << "addr-" << obj.m_address; 
	
	return os; 
} 