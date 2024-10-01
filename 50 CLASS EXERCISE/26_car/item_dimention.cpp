#include <iostream> 
#include "item_dimention.hpp" 

ItemDimention::ItemDimention(
	double d1, 
	dimention_unit_t unit, 
	dimention_format_t format 
) : 
	m_dim_1((d1 > 0) ? d1 : 0.0), 
	m_dim_2(0.0), m_dim_3(0.0), m_unit(unit), 
	m_format(format) {} 
	
ItemDimention::ItemDimention(
	double d1, 
	double d2, 
	dimention_unit_t unit, 
	dimention_format_t format
) : 
	m_dim_1((d1 > 0) ? d1 : 0.0), 
	m_dim_2((d2 > 0) ? d2 : 0.0), 
	m_dim_3(0.0), 
	m_unit(unit), m_format(format) {} 

ItemDimention::ItemDimention(
	double d1, 
	double d2, 
	double d3, 
	dimention_unit_t unit, 
	dimention_format_t format 
) : 
	m_dim_1((d1 > 0) ? d1 : 0.0), 
	m_dim_2((d2 > 0) ? d2 : 0.0), 
	m_dim_3((d3 > 0) ? d3 : 0.0), 
	m_unit(unit), 
	m_format(format) {} 
	
std::ostream& operator<<(std::ostream& os, const ItemDimention& obj) {
	os << obj.m_dim_1; 
	
	if(obj.m_format == L_W || obj.m_format == L_H || obj.m_format == W_H || obj.m_format == L_W_H || obj.m_format == L_W_D) 
		os << " X " << obj.m_dim_2; 
		
	if(obj.m_format==L_W_H || obj.m_format==L_W_D) 
		os << " X " << obj.m_dim_3; 
		
	os << " " << obj.m_unit << " ( " << obj.m_format << " )"; 
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const dimention_format_t& format) {
	switch(format) {
		case L: 
			os << "L"; 
			break; 
		case W: 
			os << "B"; 
			break; 
		case H: 
			os << "H"; 
			break; 
		case L_W: 
			os << "L X W"; 
			break; 
		case L_H: 
			os << "L X H"; 
			break; 
		case W_H: 
			os << "L X H"; 
			break; 
		case L_W_H: 
			os << "L X W X H"; 
			break; 
		case L_W_D: 
			os << "L X W X D"; 
	} 
	return os; 
} 