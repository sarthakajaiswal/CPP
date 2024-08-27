#include <iostream>
#include <cstring>

#include "address.hpp"

Address::Address(
	std::string address_line_1, 
	std::string address_line_2, 
	std::string address_line_3, 
	unsigned short pin_code
) : m_address_line_1(address_line_1), 
	m_address_line_2(address_line_2), 
	m_address_line_3(address_line_3), 
	m_pin_code(pin_code) {
	
	} 
	
std::ostream& operator<<(std::ostream& os, const Address& addr) {
	os << addr.m_address_line_1 << ", "
		<< addr.m_address_line_2 << ", " 
		<< addr.m_address_line_3 << ", "
		<< "pin - " << addr.m_pin_code; 
	
	return os; 
}