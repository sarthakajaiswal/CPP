#ifndef _VOLTAGE_HPP 
#define _VOLTAGE_HPP 

#include <iostream> 

#include "units.hpp" 
#include "current_parameters.hpp" 

namespace CurrentParameter {
	class Voltage{
		private: 
			double m_value; 
			voltage_unit_t m_unit; 
			
		public: 
			Voltage(double value, voltage_unit_t unit); 
			friend std::ostream& operator<<(std::ostream& os, const CurrentParameter::Voltage& obj); 
	}; 
}

#endif /* _VOLTAGE_HPP */ 