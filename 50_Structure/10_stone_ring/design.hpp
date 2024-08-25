#ifndef _DESIGN_HPP
#define _DESIGN_HPP

#include <iostream>
#include <cstring>

typedef enum gender_t { 
	FEMALE=0, 
	MALE, 
	TRANSGENDER 
}gender_t; 

class Design {
	private: 
		std::string m_design_number; 
		gender_t m_gender; 
		
	public: 
		Design(std::string design_number, gender_t gender);

		friend	std::ostream& operator<<(std::ostream& os, const Design& design); 
}; 

std::ostream& operator<<(std::ostream& os, const Design& obj); 

#endif