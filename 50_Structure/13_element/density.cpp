#include <iostream> 

#include "density.hpp"  
#include "units.hpp" 

Density::Density(double value, density_unit_t unit) :
	m_value(value),
	m_unit(unit) {
}

std::ostream& operator<<(std::ostream& os, const Density& obj) {
	os << obj.m_value << " " << obj.m_unit; 
	return os; 
}