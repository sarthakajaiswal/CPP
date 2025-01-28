#include <iostream> 
#include <iomanip> 
#include "vector_template.hpp" 

#include "matress.hpp" 

Matress::Matress(
	std::string brand, 
	matress_style_t style, 
	matress_size_t size, 
	std::string fabric_type, 
	
	std::vector<std::string> special_features, 
	std::vector <std::string> product_care_instructions, 
	
	water_resistant_t water_resistant_level, 
	std::string age_group_description, 
	std::string material, 
	std::string model_name,
	std::string item_model_number, 
	
	unsigned short number_of_items, 
	
	std::string manufacturer_name, 
	std::string manufacturer_address_line_1, 
	std::string manufacturer_address_line_2, 
	std::string manufacturer_address_line_3, 
	std::string manufacturer_district, 
	unsigned int manufacturer_pin_code, 
	std::string manufacturer_state, 
	std::string manufacturer_country, 
	
	unsigned long long global_trade_identification_number, 
	
	float product_dimention_1, 
	float product_dimention_2, 
	float product_dimention_3, 
	length_unit_t dimention_unit, 
	dimention_format_t dimention_format, 

	double item_weight, 
	weight_unit_t weight_unit, 
	
	std::string country_of_origin, 
	
	float customer_rating, 
	float maximum_rating, 
	float total_rating_count, 
	multiplier_t rating_count_multiplier,  
	
	bool is_assembly_required, 
	bool is_batteries_required, 

	unsigned long price, 
	currency_t currency, 
	
	std::vector <std::string> included_components
) : 
	m_is_assembly_required(is_assembly_required), 
	m_is_batteries_required(is_batteries_required), 
	m_brand(brand), 
	m_material(material), 
	m_country_of_origin(country_of_origin), 
	m_model_name(model_name), 
	m_model_number(item_model_number), 
	m_fabric_type(fabric_type), 
	m_age_group_description(age_group_description), 
	
	m_number_of_items(number_of_items), 
	m_global_trade_identification_number(global_trade_identification_number), 
	m_style(style), 
	m_size(size), 
	m_water_resistance_level(water_resistant_level), 
	m_special_features(special_features), 
	m_product_care_instructions(product_care_instructions), 
	m_included_components(included_components), 
	m_manufacturer(manufacturer_name, manufacturer_address_line_1, manufacturer_address_line_2, manufacturer_address_line_3, manufacturer_district, manufacturer_pin_code, manufacturer_state, manufacturer_country), 
	m_product_dimentions(product_dimention_1, product_dimention_2, product_dimention_3, dimention_unit, dimention_format), 
	m_item_weight(item_weight, weight_unit), 
	m_customer_reviews(customer_rating, maximum_rating, total_rating_count, rating_count_multiplier), 
	m_price(price, currency) {
}

std::ostream& operator<<(std::ostream& os, const Matress& obj) {
	os << "-----MATRASS INFORMATION-----" << std::endl 
		<< "Brand: " << obj.m_brand << std::endl 
		<< "Style: " << obj.m_style << std::endl 
		<< "size: " << obj.m_size << std::endl 
		<< "Fabric type: " << obj.m_fabric_type << std::endl 
		<< "Special features: " << obj.m_special_features << std::endl 
		<< "Product care instructions: " << obj.m_product_care_instructions << std::endl 
		<< "Water resistant: " << obj.m_water_resistance_level << std::endl 
		<< "Age group: " << obj.m_age_group_description << std::endl 
		<< "Material: " << obj.m_material << std::endl 
		<< "Model name: " << obj.m_model_name << std::endl 
		<< "Number of items: " << obj.m_number_of_items << std::endl 
		<< "Manufacturer: " << obj.m_manufacturer << std::endl; 
	os << "Global trade identification number: " << std::setw(14) << std::setfill('0') << obj.m_global_trade_identification_number << std::endl; 
	os << "Product dimention: " << obj.m_product_dimentions << std::endl 
		<< "Weight: " << obj.m_item_weight << std::endl 
		<< "Country of Origin: " << obj.m_country_of_origin << std::endl 
		<< "Item model number: " << obj.m_model_number << std::endl; 
	
	os << "Assembly Required?: "; 
	if(obj.m_is_assembly_required == 0) 
		os << "No" << std::endl; 
	else
		os << "Yes" << std::endl; 

	os << "Batteries required?: "; 
	if(obj.m_is_batteries_required == 0)
		os << "No" << std::endl; 
	else	
		os << "Yes" << std::endl; 
	
	os << "Included components: " << obj.m_included_components << std::endl 
		<< "Customer review: " << obj.m_customer_reviews << std::endl  
		<< "Price: " << obj.m_price << std::endl; 	
		
	return os; 
}