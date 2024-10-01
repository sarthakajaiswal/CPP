#include <iostream> 
#include "length.hpp" 

Length::Length() : m_value(0.0), m_unit(METER) {} 

Length::Length(double value, length_unit_t unit) {
	m_unit = unit; 
	if(value > 0) {
		m_value = value; 
		return; 
	} 
	std::cout << "Length can't be negative" << std::endl; 
	m_value = 0.0; 
} 

bool Length::operator==(const Length& other) const {
	if(this->m_value==other.m_value && this->m_unit==other.m_unit) 
		return true; 
	return false; 
} 

bool Length::operator!=(const Length& other) const {
	return !(this->operator==(other)); 
} 

std::ostream& operator<<(std::ostream& os, const Length& obj) {
	if(obj.m_value == 0) 
		return os; 
	os << obj.m_value << " " << obj.m_unit; 
	return os; 
} 