#ifndef _DIMENTION_HPP 
#define _DIMENTION_HPP 

#include <iostream> 
#include "units.hpp" 

typedef enum dimention_format {
	L_W_H = 0, 
	L_H_W, 
	L_W, 
}dimention_format_t; 

class Dimention{
	private: 
		float m_dimention_1;  
		float m_dimention_2; 
		float m_dimention_3; 
		length_unit_t m_unit; 
		dimention_format_t m_format; 
		
	public: 
		Dimention(
			float dimention_1, 
			float dimention_2, 
			float dimention_3, 
			length_unit_t unit, 
			dimention_format_t format
		); 
		
		Dimention(
			float dimention1, 
			float dimention2, 
			length_unit_t unit 
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Dimention& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const dimention_format_t& dim_format); 

#endif 