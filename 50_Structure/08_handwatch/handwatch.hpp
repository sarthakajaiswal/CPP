#ifndef _HANDWATCH_HPP
#define _HANDWATCH_HPP

#include <iostream>
#include <string>
#include <vector>

#include "connection.hpp"
#include "dimention.hpp"

typedef enum display_type{
	DIGITAL=0,
	ANALOG
}display_t;

typedef enum gps_availability{
	NO=0,
	YES
}gps_t;

class Handwatch {
	private: 
		std::string m_brand;
		std::string m_model;
		std::string m_country_origin;
		std::string m_colour;
		std::string m_belt_material;
		
		std::vector<std::string> m_special_features;
		std::vector<std::string> m_target_audience;
		
		unsigned int m_price_inr;
		float m_display_size_inches;
		float m_weight_gms;
		
		display_t m_display;
		gps_t m_gps_availability;
		
		Connection m_connectivity;
		Dimention m_product_dimention;
	
	public: 
		Handwatch(
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
			
			float lenght, 
			float breadth, 
			float height,
			unit_t dimention_unit,
				
			std::string origin_country,
			unsigned int price_inr
		);
		
		friend std::ostream& operator<<(std::ostream& os, const Handwatch& my_watch);
};

std::ostream& operator<<(std::ostream& os, const display_t& display);
std::ostream& operator<<(std::ostream& os, const gps_t& gps_availability);
std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& obj);

#endif