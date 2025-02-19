#include <iostream>
#include "current_parameters.hpp" 
#include "current.hpp" 

CurrentParameter::Current::Current(double value, current_unit_t unit) {
	m_unit = unit; 
	if(value < 0) {
		std::cout << "Current can't be negative"; 
		m_value = 0.0; 
		
		return; 
	}
	m_value = value; 
} 

std::ostream& CurrentParameter::operator<<(std::ostream& os, const CurrentParameter::Current& obj) {
	os << obj.m_value << " " << obj.m_unit; 
	return os; 
}