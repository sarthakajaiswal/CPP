#include <iostream> 

#include "abundance.hpp" 
#include "units.hpp" 

Abundance::Abundance(double value, abundance_unit_t unit) :
	m_value(value), 
	m_unit(unit) {
}

std::ostream& operator<<(std::ostream& os, const Abundance& obj) {
	os << obj.m_value << " " << obj.m_unit; 

	return os; 
}