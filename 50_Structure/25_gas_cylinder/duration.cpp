#include <iostream> 
#include "duration.hpp" 

Duration::Duration(double value, duration_unit_t unit) {
	m_unit = unit; 
	if(value < 0) {
		std::cout << "Duration can't be negative" << std::endl; 
		m_value = 0; 
		return; 
	} 
	m_value = value; 
} 

std::ostream& operator<<(std::ostream& os, const Duration& obj) {
	os << obj.m_value << " " << obj.m_unit; 
	return os; 
} 