#include <iostream>
#include <string>
#include <vector>

#include "Dimention.hpp"

Dimention::Dimention(
	float length, 
	float breadth,
	float height,
	unit_t unit
	) : m_length(length),
		m_breadth(breadth),
		m_height(height), 
		m_unit(unit) {
			
		}
		
std::ostream& operator<<(std::ostream& os, const Dimention& obj) {
	os << obj.m_length << obj.m_unit << " * " 
		<< obj.m_breadth << obj.m_unit << " * "
		<< obj.m_height << obj.m_unit;
		
	return os;
}

std::ostream& operator<<(std::ostream& os, const unit_t& obj) {
	if(obj == 0)
		os << "cms";
	else 
		os << "inches";
	
	return os;
}