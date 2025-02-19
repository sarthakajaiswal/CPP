#include <iostream> 
#include "cast.hpp" 

Cast::Cast(std::string actor, std::string role, std::string play_name) : 
	m_actor(actor), 
	m_role(role), 
	m_play_name(play_name) {
}

void Cast::show_cast_with_play_name() const{
	std::cout << this->m_play_name << std::endl; 
	this->show_cast_without_play_name(); 
} 	

void Cast::show_cast_without_play_name() const{
	std::cout << m_actor << " (" << m_role << ")" << std::endl; 
} 

std::ostream& operator<<(std::ostream& os, const Cast& obj) {
	obj.show_cast_without_play_name(); 
	
	return os; 
}