#ifndef _ADDRESS_HPP
#define _ADDRESS_HPP

#include <iostream>
#include <cstring>

class Address {
	private: 
		std::string m_city; 
		std::string m_district; 
		unsigned int m_pin_code; 
		std::string m_state; 
	
	public: 
		Address(
			std::string city, 
			std::string district, 
			unsigned int pin_code, 
			std::string state
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Address& obj);  
}; 

#endif 