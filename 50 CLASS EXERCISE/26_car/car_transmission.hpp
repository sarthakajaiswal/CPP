#ifndef _CAR_TRANSMISSION_HPP 
#define _CAR_TRANSMISSION_HPP 

#include <iostream> 

enum gear_t{ 
	MANUAL, 
	AUTOMATIC
}; 

class CarTransmission{
	private: 
		unsigned short m_number_of_gears; 
		gear_t m_gear_type; 
		
	public: 
		CarTransmission(unsigned short m_number_of_gears, gear_t gear_type); 	
		friend std::ostream& operator<<(std::ostream& os, const CarTransmission& obj); 
}; 

#endif /* _CAR_TRANSMISSION_HPP */ 