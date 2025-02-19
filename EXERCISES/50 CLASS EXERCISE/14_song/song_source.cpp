#include <iostream>
#include <cstring> 
#include <vector> 
#include "song_source.hpp" 

SongSource::SongSource(
	source_t type, 
	std::string name
) : m_type(type), m_name(name) {

}

std::ostream& operator<<(std::ostream& os, const SongSource& src) {
	os << src.m_name 
		<< " (" << src.m_type << ")"; 
		
	return os; 
}

std::ostream& operator<<(std::ostream& os, const source_t& type) {
	if(type) 
		os << "Movie"; 
	else 
		os << "Album"; 
		
	return os; 
}