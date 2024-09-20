#ifndef _ORGANIZATION_HPP 
#define _ORGANIZATION_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "address.hpp" 

class Organization{
	private: 
		std::string m_name; 
		std::string m_website; 
		std::string m_email; 
		
		Address m_address; 
		
		std::vector <unsigned long long> m_contacts; 
	
	public:
		Organization(std::string name); 
		Organization(std::string name, std::string country); 
		Organization(
			std::string name, 
			std::string state, 
			std::string country, 
			std::string website, 
			std::string email, 
			std::vector <unsigned long long> contacts
		); 
		Organization(
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
		); 
	
		friend std::ostream& operator<<(std::ostream& os, const Organization& obj); 
}; 

#endif  /* _ORGANIZATION_HPP */ 