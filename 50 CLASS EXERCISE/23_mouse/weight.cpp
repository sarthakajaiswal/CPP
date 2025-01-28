#include <iostream> 
#include "weight.hpp" 

Weight::Weight(double value, weight_unit_t unit) {
	if(value < 0) { 
		std::cout << "weight can't be negative"; 
		m_value = 0.0; 
		m_unit = unit; 
	} 
	else {
		m_value = value; 
		m_unit = unit; 
	}
}

std::ostream& operator<<(std::ostream& os, const Weight& obj) {
	os << obj.m_value << " " << obj.m_unit << " "; 
	return os; 
} 