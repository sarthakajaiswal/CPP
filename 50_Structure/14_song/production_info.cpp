#include <iostream>
#include <cstring> 
#include <vector> 

#include "production_info.hpp" 

ProductionInfo::ProductionInfo(
	std::vector<std::string> singers, 
	std::string composer, 
	std::string director, 
	std::string lyricist, 
	std::string company
	) : m_singers(singers), 
		m_lyricist(lyricist),
		m_director(director),  
		m_composer(composer), 
		m_company(company) {
		
	}
	
std::ostream& operator<<(std::ostream& os, const ProductionInfo& obj) {
	os << "Singers: " << obj.m_singers << std::endl 
		<< "Composer: " << obj.m_composer << std::endl 
		<< "Director: " << obj.m_director <<std::endl  
		<< "Lyricist: " << obj.m_lyricist << std::endl 
		<< "Company: " << obj.m_company; 
		
	return os; 
}

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec) {
	unsigned int i, size; 
	
	i=0, size = vec.size(); 
	while(i<size) {
		os << vec[i]; 
		if(i<size-1)
			os << ", "; 
			
		i++; 
	}
	
	return os; 
}