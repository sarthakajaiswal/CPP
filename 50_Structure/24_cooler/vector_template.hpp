#ifndef _VECTOR_TEMPLATE_HPP 
#define _VCETOR_TEMPLATE_HPP 

#include <iostream> 
#include <vector> 

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T> vec) {
	unsigned int i, size; 
	
	i=0, size = vec.size(); 
	while(i<size) {
		os << vec[i]; 
		if(i < size-1) 
			os << ", "; 
			
		i++; 
	} 
	
	return os; 
} 

#endif _VECTOR_TEMPLATE_HPP 