#include <iostream> 
#include "printing_paper.hpp" 

PrintingPaper::PrintingPaper(
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
	float item_height, 
	length_unit dimention_unit,

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
) :
	m_paper_size(paper_size), 
	m_paper_count(sheet_count), 
	m_price_inr(price_inr), 
	m_brand(brand), 
	m_weight(item_weight, item_weight_unit), 
	m_colour(paper_colour), 
	m_paper_finish(paper_finish_type), 
	m_item_generic_name(item_generic_name), 
	m_manufacturer(
		manufacturer_name, 
		manufacturer_address_line_1, 
		manufacturer_address_line_2, 
		manufacturer_address_line_3, 
		manufacturer_pin_code, 
		manufacturer_district, 
		manufacturer_state, 
		manufacturer_country, 
		manufacturer_email, 
		manufacturer_website, 
		manufacturer_contacts 
	), 
	m_rating(user_rating, max_rating_value, rating_count), 
	m_paper_thickness(paper_thickness, paper_thickness_unit), 
	m_special_features(special_features), 
	m_best_seller_rank(best_seller_ranks), 
	m_item_dimention(item_length, item_width, item_height, dimention_unit, L_W_H) {}

std::ostream& operator<<(std::ostream& os, const PrintingPaper& obj) {
	os << "----------Printing Paper----------" << std::endl; 

	os << "Brand: " << obj.m_brand << std::endl 
		<< "Colour: " << obj.m_colour << std::endl 
		<< "Item Weight: " << obj.m_weight << std::endl 
		<< "Paper Finish: " << obj.m_paper_finish << std::endl 
		<< "Sheet Count: " << obj.m_paper_count << std::endl 
		<< "Paper Thickness: " << obj.m_paper_thickness << std::endl 
		<< "Paper Size: " << obj.m_paper_size << std::endl 
		<< "Item Generic Name: " << obj.m_item_generic_name << std::endl 
		<< "Special Features: " << obj.m_special_features << std::endl 
		<< "Dimention: " << obj.m_item_dimention << std::endl 
		<< "Manufacturer: " << obj.m_manufacturer << std::endl 
		<< "Reviews: " << obj.m_rating << std::endl 
		<< "Best Seller Ranks: " << obj.m_best_seller_rank << std::endl 
		<< "Price: Rs. " << obj.m_price_inr << std::endl; 

	return os; 
} 

std::ostream& operator<<(std::ostream& os, const paper_size_t& size) {
	switch(size) {
		case A4: 
			os << "A4"; 
			break; 
		case A3: 
			os << "A3"; 
			break; 
		case A2: 
			os << "A2"; 
			break; 
		case A1: 
			os << "A1"; 
			break; 
		case LEDGER: 
			os << "Ledger"; 
			break; 
		case LETTER: 
			os << "Letter"; 
			break; 
		default: 
			break; 
	} 
	return os; 
} 

