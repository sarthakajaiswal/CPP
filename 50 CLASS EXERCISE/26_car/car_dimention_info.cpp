#include <iostream> 
#include "car_dimention_info.hpp" 

CarDimentionInfo::CarDimentionInfo(
	float wheel_base_value, 
	length_unit_t wheel_base_unit, 
	
	float ground_clearance, 
	length_unit_t ground_clearance_unit, 
	
	float length, 
	float width, 
	float height, 
	dimention_unit_t dimention_unit 
) : m_wheel_base(wheel_base_value, wheel_base_unit), 
	m_min_ground_clearance(ground_clearance, ground_clearance_unit), 
	m_max_ground_clearance(ground_clearance, ground_clearance_unit), 
	m_dimention(length, width, height, dimention_unit, L_W_H) {} 

CarDimentionInfo::CarDimentionInfo(
	float wheel_base_value, 
	length_unit_t wheel_base_unit, 
	
	float min_ground_clearance, 
	float max_ground_clearance, 
	length_unit_t ground_clearance_unit, 
	
	float length, 
	float width, 
	float height, 
	dimention_unit_t dimention_unit 
) : m_wheel_base(wheel_base_value, wheel_base_unit), 
	m_min_ground_clearance(min_ground_clearance, ground_clearance_unit), 
	m_max_ground_clearance(max_ground_clearance, ground_clearance_unit), 
	m_dimention(length, width, height, dimention_unit, L_W_H) {} 
	
std::ostream& operator<<(std::ostream& os, const CarDimentionInfo& obj) {
	os << "Wheel Base: " << obj.m_wheel_base << std::endl; 
		
	os << "Ground Clearance : " << obj.m_min_ground_clearance; 
	if(obj.m_min_ground_clearance != obj.m_max_ground_clearance)
		os << " - " << obj.m_max_ground_clearance; 
	os << std::endl;  
	
	os << "Dimention: " << std::endl << obj.m_dimention; 
	
	return os; 
} 