#ifndef _PRINTING_PAPER_HPP
#define _PRINTING_PAPER_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "units.hpp"
#include "vector_template.hpp"  
#include "weight.hpp" 
#include "organization.hpp" 
#include "length.hpp" 
#include "review.hpp" 
#include "best_seller_rank.hpp" 
#include "dimention.hpp" 

enum paper_size_t{
	A4, A3, A2, A1, LEDGER, LETTER
}; 

class PrintingPaper {
	private: 
		paper_size_t m_paper_size; 
		
		unsigned short m_paper_count; 
		unsigned int m_price_inr; 
		
		std::string m_brand; 
		std::string m_colour; 
		std::string m_paper_finish; 
		std::string m_item_generic_name; 

		Weight m_weight; 
		Dimention m_item_dimention; 
		Organization m_manufacturer; 
		Review m_rating; 
		Length m_paper_thickness; 
		
		std::vector<std::string> m_special_features; 
		std::vector<BestSellerRank> m_best_seller_rank; 	
	
	public: 	
		PrintingPaper(
			std::string brand, 
			std::string paper_colour, 
			
			float item_weight, 
			weight_unit item_weight_unit, 
	
			std::string paper_finish_type, 
			unsigned short sheet_count, 
			
			float paper_thickness, 
			length_unit paper_thickness_unit, 

			paper_size_t paper_size, 
			
			std::string item_generic_name,
			
			std::vector<std::string> special_features, 

			float item_length, 
			float item_width, 
			float item_thickness, 
			length_unit item_dimention_unit, 
			
			std::string manufacturer_name, 
			std::string manufacturer_address_line_1, 
			std::string manufacturer_address_line_2, 
			std::string manufacturer_address_line_3, 
			std::string manufacturer_district, 
			unsigned int manufacturer_pin_code, 
			std::string manufacturer_state, 
			std::string manufacturer_country,
			std::vector<unsigned long long> manufacturer_contacts, 
			std::string manufacturer_website, 
			std::string manufacturer_email,  

			float user_rating,
			float max_rating_value, 
			int rating_count, 

			std::vector<BestSellerRank> best_seller_ranks, 

			unsigned int price_inr 
		); 

		friend std::ostream& operator<<(std::ostream& os, const PrintingPaper& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const paper_size_t& size); 

#endif