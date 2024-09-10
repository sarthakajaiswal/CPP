#ifndef _ORGANIZATION_HPP 
#define _ORGANIZATION_HPP 

#include <iostream> 
#include <cstring> 
#include "address.hpp" 

class Organization {
	private: 
		std::string m_name; 
		Address m_address; 
		
	public: 
		Organization(
			std::string name, 
			
			std::string address_line_1, 
			std::string address_line_2, 
			std::string address_line_3, 
			std::string district, 
			unsigned int pin_code, 
			std::string state, 
			std::string country
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Organization& obj); 
}; 

#endif 