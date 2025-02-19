#include <iostream> 
#include "address.hpp" 

Address::Address() : m_pin_code(0) {} 

Address::Address(std::string state, std::string country) : 
	m_state(state), m_country(country), m_pin_code(0) {} 
	
Address::Address(std::string country) : 
	m_country(country), m_pin_code(0) {} 
	
Address::Address(
	std::string address_line_1, 
	std::string address_line_2, 
	std::string address_line_3, 
	unsigned int pin_code, 
	std::string district, 
	std::string state
) : m_address_line_1(address_line_1), 
	m_address_line_2(address_line_2), 
	m_address_line_3(address_line_3), 
	m_pin_code(pin_code), 
	m_district(district), 
	m_state(state) {} 

Address::Address(
	std::string address_line_1, 
	std::string address_line_2, 
	std::string address_line_3, 
	unsigned int pin_code, 
	std::string district,
	std::string state, 
	std::string country 
) : m_address_line_1(address_line_1), 
	m_address_line_2(address_line_2), 
	m_address_line_3(address_line_3), 
	m_pin_code(pin_code), 
	m_district(district), 
	m_country(country) {} 	
	
bool Address::is_address_empty(void) const{
	if(m_address_line_1 == "" && m_address_line_2 == "" && m_address_line_3 == "" && 
		m_district == "" && m_state == "" && m_country == "" && m_pin_code == 0) 
			return true; 
	return false; 
}  

std::ostream& operator<<(std::ostream& os, const Address& addr) {
	bool comma_flag = false; 
	
	if(addr.m_address_line_1 != "") {
		os << addr.m_address_line_1; 
		comma_flag=true; 
	} 
	if(addr.m_address_line_2 != "") {
		if(comma_flag)
			os << ", "; 
		else 
			comma_flag = true; 
		os << addr.m_address_line_2; 
	}
	if(addr.m_address_line_3 != "") {
		if(comma_flag) 
			os << ", "; 
		else 
			comma_flag = true; 
		os << addr.m_address_line_3; 
	} 
	if(addr.m_pin_code != 0) { 
		if(comma_flag)
			os << ", "; 
		else 
			comma_flag = true; 
		os << addr.m_pin_code; 
	}
	if(addr.m_district != "") {
		if(comma_flag)
			os << ", "; 
		else 
			comma_flag=true; 
		os << addr.m_district; 
	}
	if(addr.m_state!= "") {
		if(comma_flag)
			os << ", "; 
		else 
			comma_flag = true; 
		os << addr.m_state; 
	} 
	if(addr.m_country!="") {
		if(comma_flag)
			os << ", "; 
		os << addr.m_country; 
	} 
	return os; 
} 