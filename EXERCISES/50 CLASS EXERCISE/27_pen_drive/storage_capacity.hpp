#ifndef _STORAGE_CAPACITY 
#define _STORAGE_CAPACITY 

#include <iostream> 
#include "units.hpp" 

class StorageCapacity{
	private: 
		float m_capacity; 
		storage_unit m_unit; 
	
	public: 
		StorageCapacity(float capacity, storage_unit unit); 
		
		friend std::ostream& operator<<(std::ostream& os, const StorageCapacity& obj); 
};  

#endif /* STORAGE_CAPACITY */ 