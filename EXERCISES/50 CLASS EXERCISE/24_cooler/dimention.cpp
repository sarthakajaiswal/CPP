#include <iostream> 
#include "dimention.hpp" 

Dimention::Dimention(
	double dimention_1, 
	double dimention_2, 
	double dimention_3, 
	dimention_unit_t unit, 
	dimention_format_t format
) {
	if(dimention_1 < 0 || dimention_2 < 0 || dimention_3 < 0) {
		std::cout << "Dimention can't be negative" << std::endl;
		m_dim_1 = m_dim_2 = m_dim_3 = 0.0; 
	}
	else {
		m_dim_1 = dimention_1; 
		m_dim_2 = dimention_2; 
		m_dim_3 = dimention_3; 
	} 
	
	if(m_format != L_W_H && m_format != L_W_D)
		m_dim_3 = 0.0; 
	
	m_unit = unit; 
	m_format = format; 
}

Dimention::Dimention(
	double dimention_1, 
	double dimention_2, 
	dimention_unit_t unit, 
	dimention_format_t format 
) {
	m_dim_3 = 0.0; 
	m_unit = unit; 
	m_format = format; 
	
	if(dimention_1 < 0 || dimention_2 < 0) {
		std::cout << "Dimention can't be negative" << std::endl;
		m_dim_1 = m_dim_2 = 0.0; 
	} 
}

std::ostream& operator<<(std::ostream& os, const Dimention& obj) {
	if(obj.m_dim_1 <= 0 && obj.m_dim_2 <= 0 && obj.m_dim_3 <= 0) {
		os << "NA"; 
		return os; 
	}
	
	os << obj.m_dim_1 << " " << obj.m_unit; 
	if(obj.m_dim_2 > 0)
		os << " * " << obj.m_dim_2 << " " << obj.m_unit; 
	if(obj.m_dim_3 > 0 && (obj.m_format == L_W_H || obj.m_format == L_W_D)) 
		os << " * " << obj.m_dim_3 << " " << obj.m_unit; 
	
	os << " (" << obj.m_format << ")"; 
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const dimention_format_t& format) {
	switch(format) {
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
	}
	
	return os; 
}