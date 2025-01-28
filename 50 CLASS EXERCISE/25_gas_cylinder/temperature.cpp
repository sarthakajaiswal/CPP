#include <iostream> 
#include "temperature.hpp" 

Temperature::Temperature(double value, temperature_unit_t unit) : 
	m_unit(unit), m_value(value) {} 
	
std::ostream& operator<<(std::ostream& os, const Temperature& obj) {
	os << obj.m_value << " " << obj.m_unit; 
	return os; 
} 