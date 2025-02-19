#ifndef _DIMENTION_HPP
#define _DIMENTION_HPP

#include <vector>
#include <string>
#include <iostream>

typedef enum lenght_unit{
	CMS = 0,
	INCHES
}dunit_t;

class Dimention {
	private: 
		float m_length;
		float m_breadth;
		float m_height;
		dunit_t m_unit;
	
	public: 
		Dimention(
			float length, 
			float breadth, 
			float height, 
			dunit_t unit
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Dimention& dimention_obj); 
};

std::ostream& operator<<(std::ostream& os, const dunit_t& unit);

#endif 