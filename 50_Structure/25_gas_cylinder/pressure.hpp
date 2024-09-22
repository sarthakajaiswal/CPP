#ifndef _PRESSURE_HPP 
#define _PRESSURE_HPP 

#include <iostream> 
#include "units.hpp" 

class Pressure{
	private: 
		double m_value; 
		pressure_unit_t m_unit; 
		
	public: 
		Pressure(double value, pressure_unit_t unit);

		friend std::ostream& operator<<(std::ostream& os, const Pressure& obj); 
}; 

#endif /* _PRESSURE_HPP */ 