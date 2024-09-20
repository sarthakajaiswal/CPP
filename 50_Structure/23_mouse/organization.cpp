#include <iostream> 
#include "organization.hpp" 
#include "vector_template.hpp" 

Organization::Organization(std::string name) : m_name(name) {} 

Organization::Organization(std::string name, std::string country) : 
	m_name(name), m_address(country) {} 
	
Organization::Organization(
	std::string name, 
	std::string state, 
	std::string country, 
	std::string website, 
	std::string email, 
	std::vector<unsigned long long> contacts 
) : 
	m_name(name), 
	m_address(state, country), 
	m_website(website), 
	m_email(email), 
	m_contacts(contacts) {} 
	
Organization::Organization(
	std::string name, 
	std::string address_line_1, 
	std::string address_line_2, 
	std::string address_line_3, 
	unsigned int pin_code, 
	std::string district, 
	std::string state, 
	std::string country, 
	std::string website, 
	std::string email, 
	std::vector<unsigned long long> contacts 
) : 
	m_name(name), 
	m_address(
		address_line_1, address_line_2, address_line_3, 
		pin_code, district, state, country 
	), 
	m_website(website), 
	m_email(email), 
	m_contacts(contacts) {} 
	
std::ostream& operator<<(std::ostream& os, const Organization& obj) {
	os << obj.m_name; 
	if(!obj.m_address.is_address_empty()) 
		os << ", addr:- " << obj.m_address; 
	
	if(obj.m_website != "") 
		os << " website: " << obj.m_website; 
	if(obj.m_email != "") 
		os << " email: " << obj.m_email; 
	if(obj.m_contacts.size() > 0) 
		os << " contact: " << obj.m_contacts; 
	 
	 
	return os; 
} 