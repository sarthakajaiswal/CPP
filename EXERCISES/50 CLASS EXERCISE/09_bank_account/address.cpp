#include <iostream>
#include <cstring>

#include "address.hpp"

Address::Address(
	std::string city, 
	std::string district, 
	unsigned int pin_code, 
	std::string state
	) : 
		m_city(city), 
		m_district(district), 
		m_pin_code(pin_code), 
		m_state(state) {
		
		}
		
std::ostream& operator<<(std::ostream& os, const Address& obj) {
	os << obj.m_city
		<< ", " << obj.m_district 
		<< ", pin-" << obj.m_pin_code 
		<< ", " << obj.m_state; 
		
	return os; 
} 