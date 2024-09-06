#ifndef _ENERGY_HPP 
#define _ENERGY_HPP 

#include <iostream> 
#include "units.hpp" 

class Energy {
private: 
	double m_value; 
	double m_error_correction; 
	energy_unit_t m_unit; 

public: 
	Energy(
		double value, 
		double error_correction, 
		energy_unit_t unit
	);
	Energy(double value, energy_unit_t unit); 

	friend std::ostream& operator<<(std::ostream& os, const Energy& obj); 
}; 

#endif 
