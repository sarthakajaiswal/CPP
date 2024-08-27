#ifndef _WASHING_MACHINE_HPP
#define _WASHING_MACHINE_HPP

#include <iostream>
#include <cstring>
#include <vector>

#include "company.hpp" 
#include "dimention.hpp"
#include "review_info.hpp"
#include "top_seller_rank_info.hpp"

#define YES	1
#define NO	0

typedef enum console_type {
	PUSH_BUTTON = 0, 
	TOUCHPAD, 
	REMOTE_CONTROL
}console_t; 

typedef enum current_type {
	AC=0, 
	DC
}current_t; 

class WashingMachine {
	private: 
		std::string m_brand; 
		std::string m_model; 
		std::string m_country_origin; 
		std::string m_colour; 
		std::string m_access_location;

		console_t m_console; 
		
		std::vector<std::string> m_special_features; 
		
		float m_weight_pounds; 
		unsigned int m_price_inr; 
		float m_capacity_pounds; 
		int m_max_spin_speed_rpm; 
		bool m_batteries_required; 
		short m_required_voltage_volts;
		current_t m_current_type;
		short m_required_wattage_watts; 
		
		Dimention m_product_dimention; 
		Company m_marketer; 
		Company m_manufacturer; 
		ReviewInfo m_customer_review; 
		TopSellerRankInfo m_top_selling_rank; 
		
	public: 
		WashingMachine(
			std::string brand, 
			std::string model,  
			std::string colour, 
			std::string access_location,

			console_t console, 
			
			std::vector<std::string> special_features, 
			
			std::string country_origin, 
			
			float weight_pounds, 
			unsigned int price_inr,  
			float capacity_pounds,  
			int max_spin_speed_rpm, 
			bool batteries_required, 
			short required_voltage_volts, 
			current_t current_type, 
			short required_wattage_watts, 
			
			float length, 
			float breadth,  
			float height,  
			std::string dimention_unit, 
			
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

			float review, 
			unsigned short review_max_value, 
			unsigned long long total_reviews, 

			unsigned short selling_rank, 
			std::string selling_rank_category
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const WashingMachine& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec); 
std::ostream& operator<<(std::ostream& os, const console_t& console); 
std::ostream& operator<<(std::ostream& os, const current_t& current); 

#endif