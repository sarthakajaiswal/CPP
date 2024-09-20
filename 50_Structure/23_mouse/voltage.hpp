#ifndef _VOLTAGE_HPP 
#define _VOLTAGE_HPP 

#include <iostream> 
#include "units.hpp" 

enum voltage_t {AC, DC}; 

class Voltage {
	private: 
		double m_value; 
		voltage_unit_t m_unit; 
		voltage_t m_voltage_type; 
		float m_value_error_percent; 
		
	public: 
		Voltage(double value, voltage_unit_t unit, voltage_t voltage_type);
		Voltage(double value, voltage_unit_t unit, voltage_t voltage_type, float voltage_error_correction); 

		friend std::ostream& operator<<(std::ostream& os, const Voltage& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const voltage_t& type); 

#endif /* _VOLTAGE_HPP */ 