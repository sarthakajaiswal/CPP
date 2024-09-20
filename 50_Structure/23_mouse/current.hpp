#ifndef _CURRENT_HPP 
#define _CURRENT_HPP 

#include <iostream> 
#include "units.hpp" 

class Current {
	private: 
		double m_value; 
		current_unit_t m_unit; 
	
	public: 
		Current(double value, current_unit_t unit); 

		friend std::ostream& operator<<(std::ostream& os, const Current& obj); 
}; 


#endif /* _CURRENT_HPP */ 