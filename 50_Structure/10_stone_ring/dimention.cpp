#include <iostream>
#include <cstring>

#include "dimention.hpp"

Dimention::Dimention(
	float length, 
	float width, 
	float height, 
	std::string unit
) : m_length(length), 
	m_width(width), 
	m_height(height), 
	m_unit(unit) {
	
	}
	
std::ostream& operator<<(std::ostream& os, const Dimention& dimention) {
	os << dimention.m_length << dimention.m_unit << " * " 
		<< dimention.m_width << dimention.m_unit << " * " 
		<< dimention.m_height << dimention.m_unit; 
		
	return os; 
}