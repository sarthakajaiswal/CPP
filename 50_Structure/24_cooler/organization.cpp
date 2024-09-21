#include <iostream> 
#include <cstring> 

#include "vector_template.hpp" 
#include "organization.hpp" 

Organization::Organization(std::string name) : 
	m_name(name) {} 
	
Organization::Organization(std::string name, std::string country) : 
	m_name(name), m_address(country) {} 
	
Organization::Organization(std::string name, std::string district, std::string state) :
	m_name(name), m_address(district, state) {} 
	
Organization::Organization(
	std::string name, 
	std::string address_line_1, 
	std::string address_line_2, 
	std::string address_line_3, 
	unsigned int pin_code, 
	std::string district, 
	std::string state
) : 
	m_name(name), 
	m_address(
		address_line_1, address_line_2, address_line_3, 
		pin_code, district, state, ""
	) {} 

Organization::Organization(
	std::string name, 
	std::string address_line_1, 
	std::string address_line_2, 
	std::string address_line_3, 
	unsigned int pin_code, 
	std::string district, 
	std::string state, 
	std::string website, 
	std::string email, 
	std::vector<unsigned long long> contacts  
) : 
	m_name(name), 
	m_email(email),
	m_contacts(contacts), 
	m_website(website), 
	m_address(
		address_line_1, address_line_2, address_line_3, 
		pin_code, district, state, "" 
	) {} 
	
std::ostream& operator<<(std::ostream& os, const Organization& obj) {
	os << obj.m_name;
	if(!obj.m_address.is_address_empty()) 
		os << " addr: " << obj.m_address;   
	
	if(obj.m_website != "" || obj.m_email != "" || obj.m_contacts.size() > 0)
		os << std::endl; 

	if(obj.m_website != "")
		os << "website: " << obj.m_website << " "; 
	if(obj.m_email != "") 
		os << "email: " << obj.m_email << " "; 
	if(obj.m_contacts.size() != 0) 
		os << "contacts: " << obj.m_contacts;

	return os; 
} 