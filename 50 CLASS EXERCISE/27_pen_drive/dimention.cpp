#include <iostream> 
#include "dimention.hpp" 

Dimention::Dimention(float dim1, dimention_unit unit, dimention_format format) : 
	m_dim_1(dim1), m_dim_2(0), m_dim_3(0), 
	m_unit(unit), m_format(format) {} 
	
Dimention::Dimention(
	float dim1, float dim2, 
	dimention_unit unit, 
	dimention_format format
) : 
	m_dim_1(dim1), m_dim_2((format<L_W) ? 0 : dim2), m_dim_3(0), 
	m_unit(unit), m_format(format) {} 

Dimention::Dimention(
	float dim1, float dim2, float dim3, 
	dimention_unit unit, 
	dimention_format format 
) : 
	m_dim_1(dim1), m_dim_2(((format<L_W) ? 0 : dim2)), m_dim_3((format < L_W_H) ? 0 : unit), 
	m_unit(unit), m_format(format) {} 

std::ostream& operator<<(std::ostream& os, const Dimention& obj) {
	os << obj.m_dim_1; 
	if(obj.m_format >= L_W) 
		os << " X " << obj.m_dim_2; 
	if(obj.m_format == L_W_H || obj.m_format == L_W_D) 
		os << " X " << obj.m_dim_3; 
		
	os << " " << obj.m_unit << " (" << obj.m_format << ")"; 

 	return os; 
}

std::ostream& operator<<(std::ostream& os, const dimention_format& format) {
	switch(format) {
		case L: 
			os << "L"; 
			break; 
		case W: 
			os << "B"; 
			break; 
		case D: 
			os << "D"; 
			break; 
		case H: 
			os << "H"; 
			break; 
		case L_W: 
			os << "L_W"; 
			break; 
		case L_H: 
			os << "L_H"; 
			break; 
		case W_H: 
			os << "W_H"; 
			break; 
		case L_W_H: 
			os << "L_W_H"; 
			break; 
		case L_W_D: 
			os << "L_W_D"; 
	} 
	return os; 
} 