#ifndef	_STONE_INFO_HPP
#define	_STONE_INFO_HPP 

#include <iostream>
#include <cstring> 

class StoneInfo {
	private: 
		std::string m_name; 
		float m_purity_carat; 
		float m_weight_gms;
		std::string m_colour; 
		
	public: 
		StoneInfo(
			std::string name, 
			float purity_carat, 
			float weight_gms, 
			std::string colour
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const StoneInfo& obj); 
}; 

#endif