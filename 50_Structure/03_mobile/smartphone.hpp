#ifndef _SMARTPHONE_HPP
#define _SMARTPHONE_HPP

#include <iostream>
#include <vector>
#include <string> 

#include "dimention.hpp"
#include "processor.hpp" 
#include "review.hpp" 
#include "storage.hpp"
#include "osinfo.hpp"
#include "boxcomponent.hpp"

#define SUCCESS 1
#define FAILURE 0

typedef int status_t; 

std::ostream& operator<<(std::ostream& os, const std::vector<BoxComponent>& obj); 

class SmartPhone {
    private: 
		std::string m_vendor;
        std::string m_model;
        std::string m_colour;
		
		std::vector<BoxComponent> m_included_components;
		
        float m_weight_kgs;
		float m_display_cms;
		int m_battery_power;
		
        Storage m_RAM; 
		Storage m_ROM; 
		OsInfo m_operating_system;
		Processor m_cpu;
		Review m_review;
		Dimention m_product_dimention;
		
		unsigned int m_price_inr;
		
    public:
		SmartPhone(
			std::string vendor, 
			std::string model,
			std::string colour,
			
			std::string cpu_model,
			unsigned short cpu_number_of_cores,
			unsigned short cpu_speed_ghz,
			
			unsigned short ram,
			sunit_t ram_unit,
			unsigned short rom,
			sunit_t rom_unit,
			
			std::string os,
			std::string os_version,
			
			float weight_kgs, 
			float display_size_cms, 
			int battery_power,
			
			std::vector<BoxComponent> included_components,
			
			float length, 
			float breadth, 
			float height, 
			dunit_t dimention_unit, 

			float review, 
			unsigned long long total_number_of_reviews, 
			
			unsigned int price_inr			
		);
		
		SmartPhone(
			std::string vendor,
			std::string model, 
			std::string colour, 
			
			std::string cpu_model, 
			
			unsigned short ram, 
			sunit_t ram_unit, 
			unsigned short rom, 
			sunit_t rom_unit, 
			
			std::string os,
			std::string os_version, 
			
			float weight_kgs, 
			float display_size_cms, 
			int battery_power, 
			
			std::vector<BoxComponent> included_components, 
			
			float length, 
			float width, 
			float height, 
			dunit_t dimention_unit,

			float review, 
			unsigned long long total_number_of_reviews, 
			
			unsigned int price_inr
		); 
		
        friend std::ostream& operator<<(std::ostream& os, const SmartPhone& mobile_obj);
};

#endif