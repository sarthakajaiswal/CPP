#ifndef _FUEL_AVERAGE_HPP 
#define _FUEL_AVERAGE_HPP 

#include <iostream> 
#include <cstring> 

class FuelAverage{
	private: 
		float m_value; 
		std::string m_unit; 
		
	public: 
		FuelAverage(float value, std::string unit);
		friend std::ostream& operator<<(std::ostream& os, const FuelAverage& obj); 
}; 

#endif /* _FUEL_AVERAGE_HPP */ 