#include <iostream>
#include <vector>
#include <string>
#include "dimention.hpp"

Dimention::Dimention(
	float length, 
	float width, 
	float height, 
	dunit_t unit
	) : m_length(length), 
		m_breadth(width), 
		m_height(height), 
		m_unit(unit) {
		
		}
		
std::ostream& operator<<(std::ostream& os, const Dimention& dimention_obj) {
	os << dimention_obj.m_length << dimention_obj.m_unit << " * " 
		<< dimention_obj.m_breadth << dimention_obj.m_unit << " * "
		<< dimention_obj.m_height << dimention_obj.m_unit;
			
	return os;
}

std::ostream& operator<<(std::ostream& os, const dunit_t& unit) {
	if(unit) 
		os << "inches";
	else 
		os << "cms";
	
	return os;
}