#include <iostream> 
#include "torque.hpp" 

Torque::Torque(float value, torque_unit_t unit) : 
	m_value((value > 0) ? value : 0.0), m_unit(unit) {} 
	
std::ostream& operator<<(std::ostream& os, const Torque& obj) {
	if(obj.m_value >= 0)
		os << obj.m_value << " " << obj.m_unit; 
	return os; 
} 