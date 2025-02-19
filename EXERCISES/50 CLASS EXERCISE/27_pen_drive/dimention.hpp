#ifndef _DIMENTION_HPP 
#define _DIMENTION_HPP 

#include <iostream> 
#include "units.hpp" 

enum dimention_format{
	L, W, H, D, 
	L_W, L_H, W_H, 
	L_W_H, L_W_D
}; 

class Dimention{
	private: 
		float m_dim_1; 
		float m_dim_2; 
		float m_dim_3; 
		dimention_unit m_unit; 
		dimention_format m_format; 
	
	public: 
		Dimention(float dim1, dimention_unit unit, dimention_format format); 
		Dimention(
			float dim1, 
			float dim2, 
			dimention_unit unit, 
			dimention_format format
		); 
		Dimention(
			float dim1, 
			float dim2, 
			float dim3, 
			dimention_unit unit, 
			dimention_format format
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Dimention& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const dimention_format& format); 

#endif /* _DIMENTION_HPP */ 