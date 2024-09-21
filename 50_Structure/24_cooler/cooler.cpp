#include <iostream> 
#include "cooler.hpp" 
#include "vector_template.hpp" 

Cooler::Cooler(
	std::string brand_and_model_name, 
	cooler_t cooler_type, 
	grass_t cooler_grass_type, 
	
	float tub_capacity_liters, 
	
	std::string motar_winding_material, 
	double motar_working_voltage, 
	voltage_unit_t working_voltage_unit, 
	double motar_working_current, 
	current_unit_t working_current_unit, 
	unsigned short motar_current_frequency, 
	frequency_unit_t motar_current_frequency_unit, 
	CurrentParameter::current_t motar_current_type, 
	unsigned int motar_rpm, 
	
	bool is_tub_separable, 
	
	std::string body_material, 
	std::string fan_blade_material, 
	std::string colour, 
	
	unsigned int price_inr, 
	
	float cooler_dimention_1,  
	float cooler_dimention_2, 
	float cooler_dimention_3, 
	dimention_unit_t dimention_unit, 
	dimention_format_t dimention_format, 
	
	std::string manufacturer_name, 
	std::string manufacturer_city, 
	unsigned int manufacturer_pin_code, 
	std::string manufacturer_district, 
	std::string manufacturer_state, 
	
	std::string marketer_name, 
	std::string marketer_city, 	
	unsigned int marketer_pin_code, 
	std::string marketer_district, 
	std::string marketer_state, 
	std::string marketer_website, 
	std::string marketer_email,
	std::vector<unsigned long long> marketer_contacts, 

	double 	cooler_weight, 
	weight_unit_t weight_unit,  
	
	std::vector<std::string> special_features 
) : 
	m_is_tub_separable(is_tub_separable), 
	m_cooler_grass_type(cooler_grass_type), 
	m_cooler_type(cooler_type), 
	m_tub_capacity_liters(tub_capacity_liters), 
	m_price_inr(price_inr), 
	m_brand_and_model_name(brand_and_model_name), 
	m_body_material(body_material), 
	m_fan_blade_material(fan_blade_material), 
	m_colour(colour), 
	m_item_dimention(
		cooler_dimention_1, 
		cooler_dimention_2, 
		cooler_dimention_3, 
		dimention_unit, 
		dimention_format 
	), 
	m_motar_specification(
		motar_winding_material, 
		motar_current_type, 
		motar_working_voltage, working_voltage_unit, 
		motar_working_current, working_current_unit, 
		motar_current_frequency, motar_current_frequency_unit, 
		motar_rpm 
	), 
	m_manufacturer(
		manufacturer_name, 
		"", "", manufacturer_city, 
		manufacturer_pin_code, 
		manufacturer_district, 
		manufacturer_state 
	), 
	m_marketer(
		marketer_name, 
		"", "", marketer_city, 
		marketer_pin_code, 
		marketer_district, 
		marketer_state, 
		marketer_website, 
		marketer_email, 
		marketer_contacts
	), 
	m_weight(cooler_weight, weight_unit) {} 
	
std::ostream& operator<<(std::ostream& os, const Cooler& obj) {
	os << "_____COOLER_____" << std::endl; 
	
	os << "Model: " << obj.m_brand_and_model_name << std::endl 
		<< "Type: " << obj.m_cooler_type << std::endl  
		<< "Grass type: " << obj.m_cooler_grass_type << std::endl 
		<< "Colour: " << obj.m_colour << std::endl 
		<< "Motor(Fan) Specification: " << std::endl << obj.m_motar_specification << std::endl 
		<< "Is Tub Separable? " << ((obj.m_is_tub_separable) ? "Yes" : "No") << std::endl 
		<< "Tub Capacity: " << obj.m_tub_capacity_liters << " l" << std::endl 
		<< "Body Material: " << obj.m_body_material << std::endl 
		<< "Blade(Fan) Material: " << obj.m_fan_blade_material << std::endl 
		<< "Special Features: " << obj.m_special_features << std::endl 
		<< "Price: " << obj.m_price_inr << "INR" << std::endl 
		<< "Weight: " << obj.m_weight << std::endl 
		<< "Dimention: " << obj.m_item_dimention << std::endl 
		<< "Manufactured at: " << std::endl << obj.m_manufacturer << std::endl 
		<< "Marketed by: " << std::endl << obj.m_marketer << std::endl; 
		
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const grass_t& type) {
	switch(type) {
		case GRASS: 
			os <<  "grass";
			break; 
		case HONEYCOMB: 
			os << "HoneyComb"; 
			break; 
	} 
	
	return os; 
}

std::ostream& operator<<(std::ostream& os, const cooler_t& type) {
	switch(type) {
		case DESERT_COOLER: 
			os << "Desert"; 
			break; 
		case PERSONAL_COOLER: 
			os << "Personal Cooler"; 
			break; 
		case TOWER_COOLER: 
			os << "Tower Cooler"; 
			break; 
		case ROOM_COOLER: 
			os << "Room Cooler"; 
			break; 
		case WINDOW_COOLER: 
			os << "Window Cooler"; 
			break; 
	}
	
	return os; 
} 