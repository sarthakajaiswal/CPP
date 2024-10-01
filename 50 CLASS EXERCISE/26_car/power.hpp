#ifndef _POWER_HPP 
#define _POWER_HPP 

#include <iostream> 
#include "units.hpp" 

class Power{
	private: 
		float m_value; 
		power_unit_t m_unit; 
		
	public: 
		Power(float value, power_unit_t unit); 
		friend std::ostream& operator<<(std::ostream& os, const Power& obj); 
}; 

#endif /* _POWER_HPP */ 