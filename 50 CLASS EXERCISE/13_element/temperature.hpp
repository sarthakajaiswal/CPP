#ifndef _TEMPERATURE_HPP 
#define _TEMPERATURE_HPP 

#include <iostream> 
#include "units.hpp" 

class Temperature {
private: 
	double m_value; 
	temperature_unit_t m_unit; 

public: 
	Temperature(double temperature, temperature_unit_t temperature_unit); 

	friend std::ostream& operator<<(std::ostream& os, const Temperature& obj); 
}; 

#endif 
