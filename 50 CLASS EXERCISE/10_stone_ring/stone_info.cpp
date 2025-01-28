#include <iostream>
#include <cstring>

#include "stone_info.hpp" 

StoneInfo::StoneInfo(
	std::string name, 
	float purity_carat, 
	float weight_gms, 
	std::string colour
) : m_name(name), 
	m_purity_carat(purity_carat), 
	m_weight_gms(weight_gms),
	m_colour(colour) {
	
	}
	
std::ostream& operator<<(std::ostream& os, const StoneInfo& obj) {
	os << "Stone Name: " << obj.m_name << std::endl 
		<< "colour: " << obj.m_colour << std::endl 
		<< "Purity: " << obj.m_purity_carat << std::endl 
		<< "Weight: " << obj.m_weight_gms << " gms"; 
		
	return os; 
}