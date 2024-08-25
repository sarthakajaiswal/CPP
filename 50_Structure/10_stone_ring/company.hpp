#ifndef _COMPANY_HPP
#define _COMPANY_HPP

#include <iostream>
#include <cstring>

#include "address.hpp"
#include "contact_info.hpp" 

class Company {
	private: 
		std::string m_name; 
		Address m_address; 
		ContactInfo m_contact; 
		
	public: 
		Company(
			std::string name, 
			std::string address_line_1, 
			std::string address_line_2, 
			std::string address_line_3, 
			unsigned int pin_code, 
			unsigned long long contact, 
			std::string email
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Company& company); 
}; 

#endif 