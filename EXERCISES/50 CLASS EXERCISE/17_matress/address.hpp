#ifndef _ADDRESS_HPP 
#define _ADDRESS_HPP 

class Address {
	private: 
		std::string m_address_line_1; 
		std::string m_address_line_2; 
		std::string m_address_line_3; 
		std::string m_district; 
		std::string m_state; 
		std::string m_country; 

		unsigned int m_pin_code;  
		
	public: 
		Address(
			std::string address_line_1, 
			std::string address_line_2, 
			std::string address_line_3, 
			std::string district, 
			unsigned int pin_code, 
			std::string state, 
			std::string country
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Address& obj); 
}; 

#endif