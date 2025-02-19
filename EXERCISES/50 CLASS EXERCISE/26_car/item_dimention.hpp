#ifndef _ITEM_DIMENTION_HPP 
#define _ITEM_DIMENTION_HPP 

#include <iostream> 
#include "units.hpp" 

typedef length_unit_t dimention_unit_t;  

enum dimention_format_t {
	L_W_H, L_W_D, L_W, L_H, W_H, L, H, W 
}; 

class ItemDimention{
	double m_dim_1; 
	double m_dim_2; 
	double m_dim_3; 
	dimention_unit_t m_unit; 
	dimention_format_t m_format; 
	
	public: 
		ItemDimention(
			double d1, 
			dimention_unit_t unit, 
			dimention_format_t format
		); 
		ItemDimention(
			double d1, 
			double d2, 
			dimention_unit_t unit, 
			dimention_format_t format 
		); 
		ItemDimention(
			double d1, 
			double d2, 
			double d3, 
			dimention_unit_t unit, 
			dimention_format_t format
		); 

		friend std::ostream& operator<<(std::ostream& os, const ItemDimention& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const dimention_format_t& obj); 

#endif /* _ITEM_DIMENTION_HPP */ 