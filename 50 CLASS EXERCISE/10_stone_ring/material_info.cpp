#include <iostream>
#include <cstring> 

#include "material_info.hpp"

MaterialInfo::MaterialInfo(
	std::string material_name, 
	float purity_carat, 
	float weight_gms, 
	std::string colour
) : m_name(material_name), 
	m_purity_carat(purity_carat), 
	m_weight_gms(weight_gms), 
	m_colour(colour) {

}

std::ostream& operator<<(std::ostream& os, const MaterialInfo& obj) {
	os << "Material: " << obj.m_name << std::endl 
		<< "Colour: " << obj.m_colour << std::endl 
		<< "Purity: " << obj.m_purity_carat << " carat" << std::endl 
		<< "Weight: " << obj.m_weight_gms << " gms"; 
		
	return os;
}	