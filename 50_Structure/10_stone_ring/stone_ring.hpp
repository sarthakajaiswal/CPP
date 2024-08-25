#ifndef	_STONE_RiNG_HPP
#define	_STONE_RING_HPP

#include <iostream>
#include <cstring>

#include "design.hpp"
#include "stone_info.hpp"
#include "material_info.hpp" 
#include "company.hpp" 
#include "dimention.hpp" 

class StoneRing {
	private: 
		unsigned long long m_price_inr; 
		float m_weight_gms; 
	
		Design m_design; 
		StoneInfo m_stone; 
		MaterialInfo m_material;  
		Company m_marketed_by; 
		Company m_manufactured_at; 
		Dimention m_product_dimention; 
		
	public: 
		StoneRing(
			unsigned long long price_inr, 
			
			std::string design_number, 
			gender_t gender, 
			
			std::string stone_name,  
			float stone_purity_carat, 
			float stone_weight_gms, 
			std::string stone_colour, 
			
			std::string material_name, 
			float material_purity, 
			float material_weight_gms, 
			std::string material_colour, 
			
			std::string marketer_name, 
			std::string marketer_address_line_1, 
			std::string marketer_address_line_2, 
			std::string marketer_address_line_3, 
			unsigned int marketer_pin_code, 
			unsigned long long marketer_contact, 
			std::string marketer_email, 
			
			std::string manufacturer_name, 
			std::string manufacturer_address_line_1, 
			std::string manufacturer_address_line_2, 
			std::string manufacturer_address_line_3, 
			unsigned int manufacturer_pin_code, 
			unsigned long long manufacturer_contact, 
			std::string manufacturer_email, 
			
			float length, 
			float breadth, 
			float height, 
			std::string dimention_unit
		); 
		friend std::ostream& operator<<(std::ostream& os, const StoneRing& obj); 
}; 

#endif