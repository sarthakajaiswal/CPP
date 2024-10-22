#include <iostream> 
#include "weight.hpp" 

Weight::Weight(float value, weight_unit unit) {
	m_unit = unit; 
	if(value < 0) {
		std::cout << "Weight can't be negative" << std::endl; 
		m_value = 0.0; 
		return; 
	} 
	m_value = value; 
} 

std::ostream& operator<<(std::ostream& os, const Weight& obj) {
	os << obj.m_value << obj.m_unit; 
	return os; 
} 