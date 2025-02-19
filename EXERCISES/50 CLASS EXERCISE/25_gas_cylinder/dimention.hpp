#ifndef _DIMENTION_HPP 
#define _DIMENTION_HPP 

#include <iostream> 
#include "units.hpp" 

enum dimention_format_t{
	L_W_H, L_W_D, 
	L_W, W_H, L_H
}; 

class Dimention{
	private: 
		double m_dim_1; 
		double m_dim_2;
		double m_dim_3; 
		dimention_unit_t m_unit; 
		dimention_format_t m_format; 
		
	public: 
		Dimention(double dim_1, double dim_2, dimention_unit_t unit, dimention_format_t format); 
		Dimention(
			double dim_1, 
			double dim_2, 
			double dim_3, 
			dimention_unit_t unit, 
			dimention_format_t format
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Dimention& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const dimention_format_t& format); 

#endif /* _DIMENTION_HPP */ 