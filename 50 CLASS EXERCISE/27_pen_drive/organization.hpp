#ifndef _ORGANIZATION_HPP 
#define _ORGANIZATION_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 
#include "address.hpp" 

class Organization{
	private: 
		std::string m_name; 
		std::string m_customer_care_email; 
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
			std::string customer_care_email, 
			std::vector<unsigned long long> contacts, 
			std::string website 
		); 
		
		Organization(std::string name); 
		
		Organization(std::string name, std::string country); 
		
		Organization(std::string name, std::string state, std::string country, std::string website); 
		
		Organization(
			std::string name, 
			std::string address_line_1, 
			std::string address_line_2, 
			std::string address_line_3, 
			unsigned int pin_code, 
			std::string district, 
			std::string state
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Organization& obj); 
}; 

#endif /* _ORGANIZATION_HPP */ 