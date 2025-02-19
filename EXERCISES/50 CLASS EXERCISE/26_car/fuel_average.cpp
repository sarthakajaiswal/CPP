#include <iostream> 
#include "fuel_average.hpp" 

FuelAverage::FuelAverage(float value, std::string unit) : 
	m_value((value < 0) ? 0.0 : value), 
	m_unit(unit) {} 
	
std::ostream& operator<<(std::ostream& os, const FuelAverage& obj) {
	os << obj.m_value << " " << obj.m_unit; 
	return os; 
} 