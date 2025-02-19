#ifndef _VECTOR_TEMPLATE_HPP 
#define _VECTOR_TEMPLATE_HPP 

template<typename T> 
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
	size_t size = vec.size(); 

	size_t i=0; 
	while(i < size) {
		os << vec[i]; 
		if(i < size-1)
			os << ", "; 
		i++; 
	} 
	return os; 
} 

#endif /* _VECTOR_TEMPLATE_HPP */ 