#ifndef _MATRESS_HPP 
#define _MATRESS_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "units.hpp" 
#include "organization.hpp" 
#include "dimention.hpp" 
#include "customer_review.hpp" 
#include "weight.hpp" 
#include "amount.hpp" 

class Matress {
	private: 
		bool m_is_assembly_required; 
		bool m_is_batteries_required;

		std::string m_brand; 
		std::string m_material; 
		std::string m_country_of_origin; 
		std::string m_model_name;
		std::string m_model_number; 
		std::string m_fabric_type; 
		std::string m_age_group_description; 
		
		unsigned short m_number_of_items; 
		unsigned long long m_global_trade_identification_number; 

		matress_style_t m_style; 
		matress_size_t m_size; 
		water_resistant_t m_water_resistance_level; 
		
		std::vector <std::string> m_special_features; 
		std::vector <std::string> m_product_care_instructions; 
		std::vector <std::string> m_included_components; 
		
		Organization m_manufacturer; 
		Dimention m_product_dimentions; 
		Weight m_item_weight; 
		CustomerReview m_customer_reviews;  
		Amount m_price; 
				
		//std::vector <BestSellerInfo> m_best_seller_rank_info; 
		
	public: 
		Matress(
			std::string brand, 
			matress_style_t style, 
			matress_size_t size, 
			std::string fabric_type, 
			
			std::vector<std::string> special_features, 
			std::vector<std::string> product_care_instructions, 
			
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
			
			std::vector<std::string> included_components 
		); 		
		
		friend std::ostream& operator<<(std::ostream& os, const Matress& obj); 
}; 

#endif 