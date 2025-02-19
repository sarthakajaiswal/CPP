#ifndef _TORQUE_HPP 
#define _TORQUE_HPP 

#include <iostream> 
#include "units.hpp" 

class Torque{
	private: 
		float m_value; 
		torque_unit_t m_unit; 
		
	public: 
		Torque(float value, torque_unit_t unit); 
		friend std::ostream& operator<<(std::ostream& os, const Torque& obj); 
}; 

#endif /* _TORQUE_HPP */ 