#include <iostream> 
#include "storage_capacity.hpp" 

StorageCapacity::StorageCapacity(float capacity, storage_unit unit) {
	m_unit = unit; 
	
	if(capacity < 0) {
		std::cout << "Invalid storage Capacity error" << std::endl; 
		m_capacity = 0.0; 
	}
	else 
		m_capacity = capacity; 
} 

std::ostream& operator<<(std::ostream& os, const StorageCapacity& obj) {
	os << obj.m_capacity << " " << obj.m_unit; 
	return os; 
} 