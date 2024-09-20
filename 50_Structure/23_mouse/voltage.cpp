#include <iostream> 
#include "voltage.hpp" 

Voltage::Voltage(double value, voltage_unit_t unit, voltage_t voltage_type) {
	if(value < 0) {
		std::cout << "Voltage can't be naegative"; 
		m_value = 0.0; 
	}
	else 
		m_value = value; 

	m_unit = unit; 
	m_voltage_type = voltage_type; 
	m_value_error_percent = 0.0; 
}

Voltage::Voltage(
	double value, 
	voltage_unit_t unit, 
	voltage_t voltage_type, 
	float voltage_value_error_percent
) {
	if(value < 0) {
		std::cout << "Voltage cant't be negative"; 
		m_value = 0.0; 
	}
	else
		m_value = value; 
	
	m_unit = unit; 
	m_voltage_type = voltage_type; 
	
	if(voltage_value_error_percent > 0)
		m_value_error_percent = voltage_value_error_percent; 
	else 
		m_value_error_percent = 0.0; 
}

std::ostream& operator<<(std::ostream& os, const Voltage& obj) {
	os << obj.m_value << obj.m_unit << " +- " << obj.m_value_error_percent << "%" << " (" << obj.m_voltage_type << ")";
	return os; 
}

std::ostream& operator<<(std::ostream& os, const voltage_t& type) {
	if(type == AC) 
		os << "AC"; 
	else	
		os << "DC"; 
	
	return os; 
} 