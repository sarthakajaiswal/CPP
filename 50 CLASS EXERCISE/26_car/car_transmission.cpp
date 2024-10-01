#include <iostream> 
#include "car_transmission.hpp" 

CarTransmission::CarTransmission(unsigned short number_of_gears, gear_t gear_type) : 
	m_number_of_gears(number_of_gears), 
	m_gear_type(gear_type) {} 
	
std::ostream& operator<<(std::ostream& os, const CarTransmission& obj) {
	if(obj.m_gear_type == AUTOMATIC) {
		os << "Automatic"; 
		return os; 
	}
	os << obj.m_number_of_gears << " (Manual)"; 
	return os; 
}