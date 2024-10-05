#include <iostream> 
#include "data_transfer_speed.hpp" 

DataTransferSpeed::DataTransferSpeed(float speed_value, data_transfer_speed_unit unit) : 
	m_speed_value(speed_value), m_unit(unit) {} 
	
std::ostream& operator<<(std::ostream& os, const DataTransferSpeed& obj) {
	os << obj.m_speed_value << " " << obj.m_unit; 
	return os; 
} 