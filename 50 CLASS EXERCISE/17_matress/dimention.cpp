#include <iostream> 

#include "dimention.hpp" 
#include "units.hpp" 

Dimention::Dimention(
	float dimention_1, 
	float dimention_2, 
	float dimention_3, 
	length_unit_t unit, 
	dimention_format_t format
) : 
	m_dimention_1(dimention_1), 
	m_dimention_2(dimention_2), 
	m_dimention_3(dimention_3), 
	m_unit(unit), 
	m_format(format) {
}

Dimention::Dimention(
	float dimention_1, 
	float dimention_2, 
	length_unit_t unit
) :
	m_dimention_1(dimention_1), 
	m_dimention_2(dimention_2), 
	m_dimention_3(0), 
	m_unit(unit), 
	m_format(L_W) {
}

std::ostream& operator<<(std::ostream& os, const Dimention& obj) {
	os << (float)obj.m_dimention_1 << " " << obj.m_unit 
		<< " * " << (float)obj.m_dimention_2 << " " << obj.m_unit; 
	
	if(obj.m_dimention_3 != 0) 
		os << " * " << (float)obj.m_dimention_3 << " " << obj.m_unit; 

	os << "(" << obj.m_format << ")"; 
	
	return os; 
}

std::ostream& operator<<(std::ostream& os, const dimention_format_t& format) {
	switch(format) {
		case L_W_H: 
			os << "L*W*H";
			break; 
		
		case L_H_W: 
			os << "L*H*W"; 
			break; 
			
		case L_W : 
			os << "L*W"; 
	}
	
	return os; 
}