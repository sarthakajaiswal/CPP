#include <iostream> 
#include "weight.hpp" 

Weight::Weight(double value, weight_unit_t unit) : 
	m_value(value), m_unit(unit) {}
	
std::ostream& operator<<(std::ostream& os, const Weight& obj) {
	os << obj.m_value << " " << obj.m_unit; 
	
	return os; 
}