#ifndef _WEIGHT_HPP 
#define _WEIGHT_HPP 

#include <iostream> 
#include "units.hpp" 

class Weight {
	private: 
		float m_value; 
		weight_unit m_unit; 
	public: 
		Weight(float value, weight_unit unit); 

		friend std::ostream& operator<<(std::ostream& os, const Weight& obj); 
}; 

#endif /* _WEIGHT_HPP */ 