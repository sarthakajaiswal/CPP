#include <iostream> 
#include "pressure.hpp" 

Pressure::Pressure(double value, pressure_unit_t unit) {
	m_unit = unit; 
	if(value < 0) {
		std::cout << "Pressure can't be negative" << std::endl;
		m_value = 0.0; 
		return; 
	}
	m_value = value; 
}

std::ostream& operator<<(std::ostream& os, const Pressure& obj) {
	os << obj.m_value << " " << obj.m_unit; 
	return os; 
}