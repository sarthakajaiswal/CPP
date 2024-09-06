#ifndef _LENGTH_HPP 
#define	_LENGTH_HPP 

#include <iostream> 
#include "units.hpp" 

class Length {
private: 
	double m_value; 
	double m_approximate_error; 
	length_unit_t m_unit; 

public: 
	Length(double length, length_unit_t unit); 
	Length(double length, double approximate_error, length_unit_t unit); 

	friend std::ostream& operator<<(std::ostream& os, const Length& obj); 
}; 

#endif 
