#ifndef _ADDRESS_HPP
#define _ADDRESS_HPP 

#include <iostream>
#include <cstring> 

class Address {
	private: 
		std::string m_address_line_1; 
		std::string m_address_line_2; 
		std::string m_address_line_3; 
		unsigned int m_pin_code; 
		
	public: 
		Address(
			std::string address_line_1, 
			std::string address_line_2, 
			std::string address_line_3, 
			unsigned int pin_code
		);

		friend std::ostream& operator<<(std::ostream& os, const Address& obj); 
}; 

#endif