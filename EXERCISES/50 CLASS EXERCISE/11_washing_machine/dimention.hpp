#ifndef _DIMENTION_HPP
#define _DIMENTION_HPP

#include <iostream>
#include <cstring>

class Dimention {
	private: 
		float m_length; 
		float m_breadth; 
		float m_height; 
		std::string m_unit; 
		
	public: 
		Dimention(
			float length, 
			float breadth, 
			float height, 
			std::string unit
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Dimention& obj); 
}; 

#endif