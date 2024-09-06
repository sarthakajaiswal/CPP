#include <iostream> 

#include "length.hpp" 
#include "units.hpp" 

Length::Length(double value, length_unit_t unit) : 
	m_value(value), 
	m_approximate_error(0), 
	m_unit(unit) {
}

Length::Length(double value, double approximate_error, length_unit_t unit) :
	m_value(value),
	m_approximate_error(approximate_error),
	m_unit(unit) {
}

std::ostream& operator<<(std::ostream& os, const Length& obj) {
	os << obj.m_value; 
	if (obj.m_approximate_error != 0)
		os << " +- " << obj.m_approximate_error; 
	os << " " << obj.m_unit;

	return os; 
}