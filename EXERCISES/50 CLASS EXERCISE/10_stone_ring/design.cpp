#include <iostream>
#include <cstring>
#include "design.hpp" 

Design::Design(std::string design_number, gender_t gender) :
		m_design_number(design_number), 
		m_gender(gender) {
		
}

std::ostream& operator<<(std::ostream& os, const gender_t& gender) {
switch(gender) {
		case 0: 
				os << "Female"; 
			break; 
		case 1: 
			os << "Male"; 
			break; 
		case 2: 
			os << "Transgender"; 
			break;
	}
	
	return os; 
}

std::ostream& operator<<(std::ostream& os, const Design& obj) {
	os << "Design number: " << obj.m_design_number 
		<< " gender: " << obj.m_gender; 
			
	return os; 
}