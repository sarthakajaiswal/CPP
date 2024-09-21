#ifndef _ADDRESS_HPP 
#define _ADDRESS_HPP 

#include <iostream> 
#include <cstring> 

class Address{
	private: 
		std::string m_address_line_1; 
		std::string m_address_line_2; 
		std::string m_address_line_3; 
		unsigned int m_pin_code; 
		std::string m_district; 
		std::string m_state; 
		std::string m_country; 
		
	public: 
		Address(); 
		Address(std::string country); 
		Address(std::string district, std::string state);
		Address(
			std::string address_line_1, 
			std::string address_line_2, 
			std::string address_line_3, 
			unsigned int pin_code, 
			std::string district, 
			std::string state, 
			std::string coutry
		); 
		
		bool is_address_empty() const; 

		friend std::ostream& operator<<(std::ostream& os, const Address& obj); 
}; 

#endif /* _ADDRESS_HPP */ 