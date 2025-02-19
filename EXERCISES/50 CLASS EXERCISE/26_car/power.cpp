#include <iostream> 
#include "power.hpp" 

Power::Power(float value, power_unit_t unit) : 
	m_value((value > 0) ? value : 0), 
	m_unit(unit) {} 
	
std::ostream& operator<<(std::ostream& os, const Power& obj) {
	if(obj.m_value == 0) 
		return os; 
	os << obj.m_value << obj.m_unit; 
	return os; 
} 