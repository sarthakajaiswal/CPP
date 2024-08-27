#include <iostream>
#include <cstring>

#include "dimention.hpp"

Dimention::Dimention(
	float length, 
	float breadth, 
	float height, 
	std::string unit
) : 
	m_length(length), 
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