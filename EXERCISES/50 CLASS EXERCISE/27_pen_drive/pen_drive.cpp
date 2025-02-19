#include <iostream>
#include "pen_drive.hpp" 
#include "vector_template.hpp" 

PenDrive::PenDrive(
	std::string company, 
	float storage_capacity, 
	storage_unit storage_capacity_unit, 
	std::string colour, 
	std::string material, 
	
	float read_speed, 
	data_transfer_speed_unit data_read_speed_unit, 
	std::string connection_technology, 
	std::string model_name, 
	std::string generic_name, 
	
	std::string manufacturer_name, 
	std::string manufacturer_address_line_1, 
	std::string manufacturer_address_line_2, 
	std::string manufacturer_address_line_3, 
	unsigned int manufacturer_pin_code,  
	std::string manufacturer_district, 
	std::string manufacturer_state, 
	std::string manufacturer_country, 
	
	float item_length, 
	float item_width, 
	float item_height, 
	dimention_unit item_dimention_unit, 
	dimention_format item_dimention_format, 
	
	std::vector<std::string> special_features, 
	unsigned short number_of_items, 
	bool is_battery_included, 
	bool is_battery_required, 
	std::vector<std::string> compatibility, 
	std::vector<std::string> interface, 
	
	std::string country_of_origin, 
	
	float item_weight, 
	weight_unit item_weight_unit, 
	
	float review_score, 
	float max_review_value, 
	unsigned long long total_number_of_reviews, 
	
	std::vector<BestSellerRank> best_seller_ranks, 
	
	unsigned short day_when_first_available, 
	month_t month_when_first_available, 
	unsigned short year_when_first_available, 
	
	std::string packer_name, 
	std::string packer_address_line_1, 
	std::string packer_address_line_2, 
	std::string packer_address_line_3, 
	unsigned int packer_pin_code, 
	std::string packer_district, 
	std::string packer_state, 
	std::string packer_country, 
	
	std::string importer_name, 
	std::string importer_address_line_1, 
	std::string importer_address_line_2, 
	std::string importer_address_line_3, 
	unsigned int importer_pin_code, 
	std::string importer_district, 
	std::string importer_state 
) : 
	m_is_battery_required(is_battery_required), 
	m_is_battery_included(is_battery_required), 
	m_number_of_items(number_of_items), 
	m_company(company), 
	m_generic_name(generic_name), 
	m_material(material), 
	m_country_of_origin(country_of_origin), 
	m_connection_technology(connection_technology), 
	m_colour(colour), 
	m_model_name(model_name), 
	m_compatibility(compatibility), 
	m_max_data_read_speed(read_speed, data_read_speed_unit), 
	m_best_seller_ranks(best_seller_ranks), 
	m_interface(interface), 
	m_special_features(special_features), 
	m_date_first_available(
		day_when_first_available, 
		month_when_first_available, 
		year_when_first_available
	), 
	m_weight(item_weight, item_weight_unit), 
	m_storage_capacity(storage_capacity, storage_capacity_unit), 
	m_item_dimention(
		item_length, 
		item_width, 
		item_height, 
		item_dimention_unit, 
		item_dimention_format
	), 
	m_reviews(review_score, max_review_value, total_number_of_reviews), 
	m_manufacturer(
		manufacturer_name, 
		manufacturer_address_line_1, 
		manufacturer_address_line_2, 
		manufacturer_address_line_3, 
		manufacturer_pin_code, 
		manufacturer_district, 
		manufacturer_state, 
		manufacturer_country, "", {}, ""
	), 
	m_packer(
		packer_name, 
		packer_address_line_1, 
		packer_address_line_2, 
		packer_address_line_3, 
		packer_pin_code, 
		packer_district, 
		packer_state, 
		packer_country, "", {}, ""
	),
	m_importer(
		importer_name, 
		importer_address_line_1, 
		importer_address_line_2, 
		importer_address_line_3, 
		importer_pin_code, 
		importer_district, 
		importer_state 
	) {} 
	
std::ostream& operator<<(std::ostream& os, const PenDrive& obj) {
	os << "_________ PEN DRIVE __________" << std::endl; 
	os << "Company: " << obj.m_company << std::endl 
		<< "Storage Capacity: " << obj.m_storage_capacity << std::endl 
		<< "Read Speed: " << "upto " << obj.m_max_data_read_speed << std::endl 
		<< "Interface: " << obj.m_interface << std::endl 
		<< "Material: " << obj.m_material << std::endl 
		<< "Colour: " << obj.m_colour << std::endl 
		<< "Model Name: " << obj.m_model_name << std::endl 
		<< "Connection Technology: " << obj.m_connection_technology << std::endl 
		<< "Comaptibility: " << obj.m_compatibility << std::endl 
		<< "Item Generic Name: " << obj.m_generic_name << std::endl 
		<< "Dimention: " << obj.m_item_dimention << std::endl 
		<< "Special features: " << obj.m_special_features << std::endl 
		<< "Number of items: " << obj.m_number_of_items << std::endl 
		<< "Is Battery Required? " << ((obj.m_is_battery_required==true) ? "Yes" : "No") << std::endl 
		<< "Is battery included? " << ((obj.m_is_battery_included==true) ? "Yes" : "No") << std::endl 
		<< "Product Generic name: " << obj.m_generic_name << std::endl 
		<< "Coutry of Origin: "  << obj.m_country_of_origin << std::endl 
		<< "Weight: " << obj.m_weight << std::endl 
		<< "Reviews: " << obj.m_reviews << std::endl 
		<< "Date First Available: " << obj.m_date_first_available << std::endl 
		<< "Manufacturer: " << obj.m_manufacturer << std::endl 
		<< "Best Seller Rank: " << obj.m_best_seller_ranks	 << std::endl 
		<< "Packer: " << obj.m_packer << std::endl 
		<< "Importer: " << obj.m_importer << std::endl; 
		
	return os; 
} 