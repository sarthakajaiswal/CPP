#ifndef _MATERIAL_INFO_HPP
#define _MATERIAL_INFO_HPP

#include <iostream>
#include <cstring> 

class MaterialInfo {
	private: 
		std::string m_name; 
		float m_purity_carat; 
		float m_weight_gms; 
		std::string m_colour; 
		
	public: 
		MaterialInfo(
			std::string material_name, 
			float purity_carat, 
			float weight_gms, 
			std::string colour
		); 
		
	friend std::ostream& operator<<(std::ostream& os, const MaterialInfo& obj);
}; 

#endif 