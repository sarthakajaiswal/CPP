#ifndef _CPUINFO_HPP
#define _CPUINFO_HPP

#include <string>
#include <iostream>

class Processor { 
	private: 
		std::string m_model; 
		unsigned short m_number_of_cores; 
		unsigned short m_speed_mhz; 

	public: 
		Processor(
			std::string model, 
			unsigned short number_of_cores, 
			unsigned short speed_mhz
			); 

		Processor(std::string model); 
			
		friend std::ostream& operator<<(std::ostream& os, const Processor& obj); 
};  

#endif