#ifndef _ABUNDANCE_HPP 
#define _ABUNDANCE_HPP 

#include <iostream> 
#include "units.hpp" 

class Abundance {
private: 
	double m_value; 
	abundance_unit_t m_unit; 

public: 
	Abundance(double value, abundance_unit_t unit); 

	friend std::ostream& operator<<(std::ostream& os, const Abundance& obj); 
}; 

#endif 
