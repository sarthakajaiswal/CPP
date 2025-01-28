#ifndef _CURRENT_PARAMETERS_HPP 
#define _CURRENT_PARAMETERS_HPP 

namespace CurrentParameter{
	enum current_t {AC, DC}; 

	class Voltage; 
	class Current; 
	class Frequency; 
	
	std::ostream& operator<<(std::ostream& os, const CurrentParameter::current_t& type); 
}; 

#endif /* _CURRENT_PARAMETERS_HPP */ 