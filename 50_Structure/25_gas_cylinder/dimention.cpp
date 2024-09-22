#include <iostream> 
#include "dimention.hpp" 

Dimention::Dimention(
	double dim_1, double dim_2, double dim_3, 
	dimention_unit_t unit, dimention_format_t format
) {
	m_unit = unit; 
	m_format = format; 
	if(dim_1 < 0 || dim_2 < 0 || dim_3 < 0) {
		std::cout << "Dimention can't be negative"; 
		m_dim_1 = m_dim_2 = m_dim_3 = 0.0; 
		return;  
	}  
	m_dim_1 = dim_1; 
	m_dim_2 = dim_2; 
	m_dim_3 = dim_3; 
} 

Dimention::Dimention(
	double dim_1, double dim_2,
	dimention_unit_t unit, dimention_format_t format
) {
	m_unit = unit; 
	m_format = format; 
	if(dim_1 < 0 || dim_2 < 0) {
		std::cout << "Dimention can't be negative"; 
		m_dim_1 = m_dim_2 = m_dim_3 = 0.0; 
		return;  
	}  
	m_dim_1 = dim_1; 
	m_dim_2 = dim_2; 
	m_dim_3 = 0.0; 
}
	
std::ostream& operator<<(std::ostream& os, const Dimention& obj) {
	if(obj.m_dim_1 <= 0 && obj.m_dim_2 <= 0 && obj.m_dim_3 <= 0) 
		return os; 
	
	os << obj.m_dim_1 << " " << obj.m_unit << " * " << obj.m_dim_2; 
	
	if(obj.m_format == L_W_H || obj.m_format == L_W_D)
		os << " * " << obj.m_dim_3; 
	
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
		case W_H: 
			os << "W*H"; 
			break; 
	}	
	return os; 
} 