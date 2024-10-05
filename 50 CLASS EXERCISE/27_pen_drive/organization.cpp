#include <iostream> 
#include "organization.hpp" 
#include "vector_template.hpp" 

Organization::Organization(
	std::string name, 
	std::string address_line_1, 
	std::string address_line_2, 
	std::string address_line_3, 
	unsigned int pin_code, 
	std::string district, 
	std::string state, 
	std::string country, 
	std::string customer_care_email, 
	std::vector<unsigned long long> contacts, 
	std::string website
) : 
	m_name(name), 
	m_address(
		address_line_1, address_line_2, address_line_3, 
		pin_code, district, state, country
	), 
	m_customer_care_email(customer_care_email), 
	m_website(website), 
	m_contacts(contacts) {} 
	
Organization::Organization(std::string name) : 
	m_name(name) {} 

Organization::Organization(std::string name, std::string country) : 
	m_name(name), m_address(country) {} 
	
Organization::Organization(
	std::string name, 
	std::string state, 
	std::string country, 
	std::string website
) : m_name(name), 
	m_address(state, country), 
	m_website(website) {} 
	
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
		pin_code, district, state 
	) {} 
	
std::ostream& operator<<(std::ostream& os, const Organization& obj) {
	bool comma_flag = false; 
	
	if(obj.m_name != "") {
		os << obj.m_name; 
		comma_flag = true; 
	}
	if(!obj.m_address.is_address_empty()) {
		if(comma_flag)
			os << std::endl; 
		os << obj.m_address; 
	}
	if(obj.m_customer_care_email != "" || obj.m_website != "" || obj.m_contacts.size() > 0) {
		if(comma_flag) 
			os << std::endl << "Contact: "; 
		comma_flag = false; 
		if(obj.m_contacts.size() > 0) {
			os << obj.m_contacts; 
			comma_flag = true; 
		} 
		if(obj.m_customer_care_email != "") {
			if(comma_flag)
				os << ", "; 
			else 
				comma_flag = true; 
			os << "email-" << obj.m_customer_care_email; 
		} 
		if(obj.m_website != "") {
			if(comma_flag)
				os << ", "; 
			os << "website-" << obj.m_website; 
		} 
	} 
	return os; 
} 