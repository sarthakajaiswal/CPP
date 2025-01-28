#ifndef _SOURCE_HPP
#define _SOURCE_HPP 

#include <iostream>
#include <cstring> 

typedef enum source_type {
	ALBUM = 0, 
	MOVIE
}source_t; 

class SongSource {
	private: 
		source_t m_type; 
		std::string m_name; 
	
	public: 
		SongSource(
			source_t type,  
			std::string name
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const SongSource& src); 
}; 

std::ostream& operator<<(std::ostream& os, const source_t& type); 

#endif 
