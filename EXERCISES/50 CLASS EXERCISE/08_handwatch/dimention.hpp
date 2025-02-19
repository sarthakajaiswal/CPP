#ifndef _DIMENTION_HPP
#define _DIMENTION_HPP

#include <iostream>

typedef enum dimention_unit{
	CENTIMENTER = 0,
	INCH
}unit_t;

class Dimention{
	private: 
		float m_length;
		float m_breadth;
		float m_height;
		unit_t m_unit;
	
	public: 
		Dimention(
			float length,
			float breadth,
			float height,
			unit_t unit
		);
		
		friend std::ostream& operator<<(std::ostream& os, const Dimention& obj);
};

std::ostream& operator<<(std::ostream& os, const unit_t& obj);
	
#endif