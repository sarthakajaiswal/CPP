#ifndef _DATA_TRANSFER_SPEED 
#define _DATA_TRANSFER_SPEED

#include <iostream> 
#include "units.hpp" 

class DataTransferSpeed{
	private: 
		float m_speed_value; 
		data_transfer_speed_unit m_unit; 
		
	public: 
		DataTransferSpeed(float speed, data_transfer_speed_unit unit); 
		friend std::ostream& operator<<(std::ostream& os, const DataTransferSpeed& obj); 
}; 

#endif /* _DATE_TRANSFER_SPEED */ 