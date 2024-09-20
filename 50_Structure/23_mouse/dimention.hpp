#ifndef _DIMENTION_HPP 
#define _DIMENTION_HPP 

#include <iostream> 
#include "units.hpp" 

enum dimention_format_t {
	L_W_D, L_W_H, L_W, W_H, L_H	
}; 

class Dimention {
	private: 
		float m_dim_1; 
		float m_dim_2; 
		float m_dim_3; 
		length_unit_t m_unit; 
		dimention_format_t m_format; 
		
	public: 
			Dimention(
				float dim_1, float dim_2, float dim_3, 
				length_unit_t unit, 
				dimention_format_t format
			);
			Dimention(
				float dim_1, float dim_2,
				length_unit_t unit, dimention_format_t format 
			); 
			
			friend std::ostream& operator<<(std::ostream& os, const Dimention& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const dimention_format_t& unit); 

#endif /* _DIMENTION_HPP */