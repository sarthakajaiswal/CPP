#include <iostream>
#include <cstring>

#include "stone_ring.hpp" 

StoneRing::StoneRing(
	unsigned long long price_inr, 
	
	std::string design_number, 
	gender_t gender, 
	
	std::string stone_name, 
	float stone_purity_carat, 
	float stone_weight_gms,
	std::string stone_colour, 
		
	std::string material_name, 
	float material_purity_carat, 
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
	float width, 
	float height, 
	std::string dimention_unit
) : 
	m_price_inr(price_inr), 
	m_design(design_number, gender), 
	m_material(material_name, material_purity_carat, material_weight_gms, material_colour), 
	m_stone(stone_name, stone_purity_carat, stone_weight_gms, stone_colour),
	m_marketed_by(marketer_name, marketer_address_line_1, marketer_address_line_2, marketer_address_line_3, marketer_pin_code, marketer_contact, marketer_email),
	m_manufactured_at(manufacturer_name, manufacturer_address_line_1, manufacturer_address_line_2, manufacturer_address_line_3, manufacturer_pin_code, manufacturer_contact, manufacturer_email), 
	m_product_dimention(length, width, height, dimention_unit) {
		m_weight_gms = material_weight_gms + stone_weight_gms; 
}

std::ostream& operator<<(std::ostream& os, const StoneRing& obj) {
	os << "Material Info: " << std::endl << obj.m_material << std::endl 
		<< "Stone Info: " << std::endl << obj.m_stone << std::endl 
		<< "Design: " << std::endl << obj.m_design << std::endl 
		<< "Weight: " << obj.m_weight_gms << " gms" << std::endl
		<< "Product Dimention: " << obj.m_product_dimention << std::endl 
		<< "Manufactured by: " << obj.m_manufactured_at << std::endl 
		<< "Marketed by: " << obj.m_marketed_by << std::endl 
		<< "Price: " << obj.m_price_inr << " Rs." << std::endl; 
		
	return os; 
} 
