#include <iostream> 
#include "voltage.hpp" 

CurrentParameter::Voltage::Voltage(double value, voltage_unit_t unit) : 
	m_value(value), m_unit(unit) {}

std::ostream& CurrentParameter::operator<<(std::ostream& os, const CurrentParameter::Voltage& obj) {
	os << obj.m_value << " " << obj.m_unit; 
	return os; 
}