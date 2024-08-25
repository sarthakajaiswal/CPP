#include <iostream>
#include <cstring>

#include "company.hpp"

Company::Company(
	std::string name, 
	std::string address_line_1, 
	std::string address_line_2, 
	std::string address_line_3, 
	unsigned int pin_code, 
	unsigned long long contact, 
	std::string email
) : m_name(name), 
	m_address(address_line_1, address_line_2, address_line_3, pin_code), 
	m_contact(contact, email) {
		
	}
	
std::ostream& operator<<(std::ostream& os, const Company& obj) {
	os << obj.m_name << ", " 
		<< obj.m_address << " "
		<< obj.m_contact; 
		
	return os; 
}