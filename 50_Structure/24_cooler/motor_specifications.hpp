#ifndef _MOTOR_SPECIFICATIONS_HPP 
#define _MOTOR_SPECIFICATIONS_HPP 

#include <iostream> 
#include "current_parameters.hpp" 
#include "units.hpp" 
#include "voltage.hpp" 
#include "current.hpp" 
#include "frequency.hpp" 

class MotorSpecifications {
	private: 
		CurrentParameter::current_t m_current_type; 
		
		unsigned int m_rpm; 
		std::string m_winding_material; 
		
		CurrentParameter::Voltage m_working_voltage;  
		CurrentParameter::Current m_working_current; 
		CurrentParameter::Frequency m_working_frequency; 
		
	public: 
		MotorSpecifications(
			std::string winding_material, 
			CurrentParameter::current_t current_type, 
			
			double working_voltage_value, 
			voltage_unit_t voltage_unit, 
			
			double working_current_value, 
			current_unit_t working_current_unit, 
			
			double working_frequency, 
			frequency_unit_t working_frequency_unit_t, 
			
			unsigned int rpm 
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const MotorSpecifications& obj); 
}; 


#endif /* _MOTOR_SPECIFICATIONS_HPP */ 