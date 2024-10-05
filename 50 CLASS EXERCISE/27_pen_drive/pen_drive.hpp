#ifndef _PEN_DRIVE_HPP 
#define _PEN_DRIVE_HPP 

#define NO 	0 
#define YES	1 

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "units.hpp" 
#include "organization.hpp" 
#include "dimention.hpp" 
#include "date.hpp" 
#include "review.hpp" 
#include "data_transfer_speed.hpp" 
#include "weight.hpp" 
#include "best_seller_rank.hpp" 
#include "storage_capacity.hpp" 

class PenDrive{
	private: 
		bool m_is_battery_required; 
		bool m_is_battery_included; 
		
		unsigned short m_number_of_items; 
		
		std::string m_company; 
		std::string m_generic_name; 
		std::string m_material; 
		std::string m_country_of_origin; 
		std::string m_connection_technology; 
		std::string m_colour; 
		std::string m_model_name; 
	
		DataTransferSpeed m_max_data_read_speed; 
		Date m_date_first_available; 
		Weight m_weight; 
		StorageCapacity m_storage_capacity; 
		Dimention m_item_dimention; 
		Review m_reviews; 
		Organization m_manufacturer; 
		Organization m_packer; 
		Organization m_importer; 
		
		std::vector<BestSellerRank> m_best_seller_ranks; 
		
		std::vector<std::string> m_interface; 	
		std::vector<std::string> m_special_features; 
		std::vector<std::string> m_compatibility; 
				
	public: 
		PenDrive(
			std::string company,
			float storage_capacity, 
			storage_unit storage_capacity_unit, 
			std::string colour, 
			std::string material, 
						
			float read_speed, 
			data_transfer_speed_unit date_transfer_rate_unit, 
			std::string connection_technology, 
			std::string model_name, 
			std::string item_generic_name, 
			
			std::string manufacturer_name, 
			std::string manufacturer_address_line_1, 
			std::string manufacturer_address_line_2, 
			std::string manufacturer_address_line_3, 
			unsigned int manufacturer_spin_code, 
			std::string manufacturer_district, 
			std::string manufaacturer_state, 
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
		); 
	
		friend std::ostream& operator<<(std::ostream& os, const PenDrive& obj); 
}; 

#endif /* _PEN_DRIVE_HPP */ 