#ifndef _DIMENTION_HPP
#define _DIMENTION_HPP

#include <iostream>
#include <cstring> 

class Dimention {
	private: 
		float m_length; 
		float m_width; 
		float m_height; 
		std::string m_unit; 
		
	public: 
		Dimention(
			float m_lenght, 
			float m_width, 
			float m_height, 
			std::string unit
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Dimention& obj); 
}; 

#endif 