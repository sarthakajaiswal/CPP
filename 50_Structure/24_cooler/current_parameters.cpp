#include <iostream> 
#include "current_parameters.hpp" 

std::ostream& CurrentParameter::operator<<(std::ostream& os, const CurrentParameter::current_t& type) {
	if(type==AC) os << "AC"; 
	else if(type == DC) os << "DC"; 
	
	return os; 
}