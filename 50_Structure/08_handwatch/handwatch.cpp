#include <iostream>

#include "handwatch.hpp"

Handwatch::Handwatch(
	std::string brand,
	std::string model,
	display_t display, 
	
	std::vector<std::string> special_features,
	gps_t gps_availability,
	std::string colour,
	std::string belt_material,
	
	float weight_gram,
	float display_size_inches,
	std::vector<std::string> target_audience,
	
	std::string connection_technology,
	
	float length,
	float breadth, 
	float height,
	unit_t dimention_unit,
	
	std::string origin_country,
	unsigned int price_inr
) : m_brand(brand),
	m_model(model),
	m_country_origin(origin_country),
	m_colour(colour),
	m_belt_material(belt_material),
	
	m_special_features(special_features),
	m_target_audience(target_audience),
	
	m_price_inr(price_inr),
	m_display_size_inches(display_size_inches),
	m_weight_gms(weight_gram),
	
	m_display(display),
	m_gps_availability(gps_availability),
	
	m_connectivity(connection_technology),
	m_product_dimention(length, breadth, height, dimention_unit) {
	
	}
	
std::ostream& operator<<(std::ostream& os, const Handwatch& obj) {
	os << "Handwatch Information: " << std::endl
		<< "Brand : " << obj.m_brand << std::endl
		<< "Model : " << obj.m_model << std::endl
		<< "Special Features : " << obj.m_special_features << std::endl
		<< "Colour : " <<  obj.m_colour << std::endl
		<< "Belt Material : " << obj.m_belt_material << std::endl
		<< "Display type : " << obj.m_display << std::endl
		<< "Display size : " << obj.m_display_size_inches << " inches" << std::endl
		<< "GPS enabled : " << obj.m_gps_availability << std::endl
		<< "Weight : " << obj.m_weight_gms << " gms" << std::endl
		<< "Target audience : " << obj.m_target_audience << std::endl
		<< "Connectivity : " << obj.m_connectivity << std::endl
		<< "Product Dimentions : " << obj.m_product_dimention << std::endl
		<< "Country Origin : " << obj.m_country_origin << std::endl 
		<< "Price : " << obj.m_price_inr << " Rs" << std::endl; 

	return os;
}

std::ostream& operator<<(std::ostream& os, const display_t& obj) {
	if(obj == 0)
		os << "Digital";
	else
		os << "Analog";
	
	return os;
}

std::ostream& operator<<(std::ostream& os, const gps_t& obj) {
	if(obj)
		os << "Yes";
	else
		os << "No";
	
	return os;
}

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& obj) {
	int size = obj.size();
	
	int i=0;
	while(i<size) {
		os << obj[i];
		if(i != size-1)
			os << ", ";
		
		++i;
	}
	
	return os;
}

