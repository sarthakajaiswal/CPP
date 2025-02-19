#include <iostream>
#include <string>
#include "processor.hpp" 

Processor::Processor(
	std::string model, 
	unsigned short number_of_cores, 
	unsigned short speed_ghz
	) : m_model(model), 
		m_number_of_cores(number_of_cores), 
		m_speed_mhz(speed_ghz) {
			
		}

Processor::Processor(std::string model) : 
	m_model(model), 
	m_number_of_cores(0), 
	m_speed_mhz(0) {

	}
		
std::ostream& operator<<(std::ostream& os, const Processor& obj) {
	os << obj.m_model << " "; 
	
	if(obj.m_number_of_cores > 1)
		switch(obj.m_number_of_cores) {
			case 2: 
				os << "DualCore";
				break; 
			case 4: 
				os << "QuadCore";
				break; 
			case 8: 
				os << "OctaCore"; 
				break; 
			default: 
				os << "cores-" << obj.m_number_of_cores;
		}
	
	os << " ";
	
	if(obj.m_speed_mhz)
		os << obj.m_speed_mhz << "MHz"; 

	return os; 
} 