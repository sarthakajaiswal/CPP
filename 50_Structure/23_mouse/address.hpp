#ifndef _ADDRESS_HPP 
#define _ADDRESS_HPP 

#include <iostream> 
#include <cstring> 
#include "address.hpp" 

class Address{
	friend class Organization; 
	private: 
		std::string m_address_line_1; 
		std::string m_address_line_2; 
		std::string m_address_line_3; 
		std::string m_district; 
		std::string m_state; 
		std::string m_country; 
		
		unsigned int m_pin_code; 
		
	public: 
		Address(); 
		Address(std::string country); 
		Address(std::string state, std::string country);
		Address(
			std::string district, 
			std::string state, 
			std::string country 
		); 
		Address(
			std::string address_line_1, 
			std::string address_line_2, 
			std::string address_line_3, 
			unsigned int pin_code, 
			std::string district, 
			std::string state, 
			std::string country 
		); 
		
		bool is_address_empty() const; 
		
		friend std::ostream& operator<<(std::ostream& os, const Address& obj); 
}; 

#endif /* _ADDRESS_HPP */ 