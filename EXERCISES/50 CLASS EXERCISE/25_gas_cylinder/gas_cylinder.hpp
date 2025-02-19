#ifndef _GAS_CYLINDER_HPP 
#define _GAS_CYLINDER_HPP 

#include <iostream> 
#include <vector> 

#include "dimention.hpp" 
#include "weight.hpp" 
#include "date.hpp" 
#include "pressure.hpp" 
#include "duration.hpp" 
#include "temperature.hpp" 

enum fill_status_t {FILLED, EMPTY}; 

class GasCylinder {
	private: 
		fill_status_t m_fill_status; 
	
		unsigned long m_price_inr; 
	
		std::string m_gas; 
		std::string m_brand; 
		std::string m_colour; 
		
		Weight m_net_weight; 
		Weight m_gross_weight; 
		Date m_manufacture_date; 
		Dimention m_item_dimention; 
		Pressure m_internal_pressure_at_normal_temperature_of_gas; 
		Temperature m_maximum_storage_temperature; 
		Duration m_service_life_duration; 
		
		std::vector<std::string> m_special_feature; 

	public: 
		GasCylinder(
			std::string brand, 
			
			double net_weight, 
			double gross_weight, 
			weight_unit_t weight_unit, 
			
			month_t manufacture_month, 
			unsigned short manufacture_year, 
			
			float dimention_1, 
			float dimention_2, 
			float dimention_3, 
			dimention_unit_t dimention_unit, 
			dimention_format_t dimention_format, 
			
			std::string colour, 
			fill_status_t fill_status, 
			std::string filled_gas, 
			
			double internal_pressure_at_normal_temperature, 
			pressure_unit_t pressure_unit, 
			
			double max_storage_temperature, 
			temperature_unit_t storage_temperature_unit, 
			
			double service_life_duration, 
			duration_unit_t service_life_duration_unit, 

			std::vector<std::string> special_features, 
			
			unsigned long price_inr
		);  
		
		friend std::ostream& operator<<(std::ostream& os, const GasCylinder& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const fill_status_t& status); 

#endif /* _GAS_CYLINDER_HPP */ 