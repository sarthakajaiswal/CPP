#include <iostream> 
#include "dimention.hpp" 

Dimention::Dimention(
	float dim_1, float dim_2, float dim_3, 
	length_unit_t unit, 
	dimention_format_t format
) : 
	m_dim_1(dim_1), m_dim_2(dim_2), m_unit(unit), m_format(format) {
		if(format != L_W_D && format != L_W_H) 
			m_dim_3 = 0.0; 
		else 
			m_dim_3 = dim_3; 
	} 

Dimention::Dimention(
	float dim_1, float dim_2,  
	length_unit_t unit, dimention_format_t format 
) : m_dim_1(dim_1), m_dim_2(dim_2), m_dim_3(0.0), m_unit(unit), m_format(format) {}	

std::ostream& operator<<(std::ostream& os, const Dimention& obj) { 
	if(obj.m_dim_1==0 && obj.m_dim_2 ==0 && obj.m_dim_3==0) {
		os << "-"; 
		return os; 
	}
	if(obj.m_dim_1 > 0) 
		os << obj.m_dim_1 << obj.m_unit; 
	if(obj.m_dim_2 > 0) 
		os << " * " << obj.m_dim_2 << obj.m_unit; 
	if(obj.m_dim_3 > 0) 
		os << " * " << obj.m_dim_3 << obj.m_unit; 
	
	os << " " << obj.m_format;
	
	return os; 
}

std::ostream& operator<<(std::ostream& os, const dimention_format_t& format) {
	switch (format) {
		case L_W_H: 
			os << "L*W*H"; 
			break;
		case L_W_D: 
			os << "L*W*D"; 
			break; 
		case L_W: 
			os << "L*W"; 
			break; 
		case L_H: 
			os << "L*H"; 
			break; 
		case W_H: 
			os << "W*H"; 
			break; 
	} 
	
	return os; 
} 