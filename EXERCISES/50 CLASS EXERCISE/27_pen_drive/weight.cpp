#include <iostream> 
#include "weight.hpp" 

Weight::Weight(float value, weight_unit unit) {
	if(value < 0) {
		std::cout << "Invalid weight"; 
		m_value = 0; 
	} 
	else 
		m_value = value; 
		
	m_unit = unit; 
} 
	
std::ostream& operator<<(std::ostream& os, const Weight& obj) {
	os << obj.m_value << " " << obj.m_unit; 
	return os; 
} 