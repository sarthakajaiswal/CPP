#include <iostream> 

#include "energy.hpp" 
#include "units.hpp" 

Energy::Energy(double value, energy_unit_t unit) :
	m_value(value), 
	m_error_correction(0), 
	m_unit(unit) {
}

Energy::Energy(double value, double error_correction, energy_unit_t unit) :
	m_value(value),
	m_error_correction(error_correction),
	m_unit(unit) {
}

std::ostream& operator<<(std::ostream& os, const Energy& obj) {
	os << obj.m_value; 
	if (obj.m_error_correction != 0)
		os << " +- " << obj.m_error_correction;
	os << " " << obj.m_unit; 

	return os; 
}