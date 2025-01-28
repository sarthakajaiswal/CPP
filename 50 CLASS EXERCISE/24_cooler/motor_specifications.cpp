#include <iostream> 
#include "motor_specifications.hpp"
#include "current_parameters.hpp"  

MotorSpecifications::MotorSpecifications(
	std::string winding_material, 
	CurrentParameter::current_t current_type, 
	
	double working_voltage_value, 
	voltage_unit_t working_voltage_unit, 
	
	double working_current_value, 
	current_unit_t working_current_unit, 
	
	double working_frequency, 
	frequency_unit_t frequency_unit, 
	
	unsigned int rpm 
) : 
	m_current_type(current_type), 
	m_rpm(rpm), 
	m_winding_material(winding_material), 
	m_working_current(working_current_value, working_current_unit), 
	m_working_voltage(working_voltage_value, working_voltage_unit), 
	m_working_frequency(working_frequency, frequency_unit) {} 

std::ostream& operator<<(std::ostream& os, const MotorSpecifications& obj) {
	os << "Winding: " << obj.m_winding_material << std::endl 
		<< "Voltage: " << obj.m_working_voltage << std::endl 
		<< "Current: " << obj.m_working_current << std::endl 
		<< "Current Type: " << obj.m_current_type << std::endl; 
		
	if(obj.m_current_type == CurrentParameter::AC)
		os << "Frequency: " << obj.m_working_frequency << std::endl; 
	
	os << "Revolution Speed: " << obj.m_rpm << " RPM"; 

	return os; 
} 