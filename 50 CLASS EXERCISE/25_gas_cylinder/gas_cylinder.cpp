#include <iostream> 
#include "gas_cylinder.hpp" 
#include "vector_template.hpp" 

GasCylinder::GasCylinder(
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
) : 
	m_fill_status(fill_status), 
	m_price_inr(price_inr), 
	m_gas(filled_gas), 
	m_brand(brand), 
	m_colour(colour), 
	
	m_net_weight(net_weight, weight_unit), 
	m_gross_weight(gross_weight, weight_unit), 
	m_manufacture_date(manufacture_month, manufacture_year), 
	m_item_dimention(dimention_1, dimention_2, dimention_3, dimention_unit, dimention_format), 
	m_internal_pressure_at_normal_temperature_of_gas(internal_pressure_at_normal_temperature, pressure_unit), 
	m_maximum_storage_temperature(max_storage_temperature, storage_temperature_unit), 
	m_service_life_duration(service_life_duration, service_life_duration_unit) {} 
	
std::ostream& operator<<(std::ostream& os, const GasCylinder& obj) {
	os << "_____GAS CYLINDER____" << std::endl 
		<< "Brand: " << obj.m_brand << std::endl 
		<< "Net Weight: " << obj.m_net_weight << std::endl 
		<< "Gross Weight: " << obj.m_gross_weight <<std::endl 
		<< "Status: " << obj.m_fill_status << std::endl 
		<< "Gas: " << obj.m_gas << std::endl 
		<< "Cylinder Colour: " << obj.m_colour << std::endl 
		<< "Manufacture Date: " << obj.m_manufacture_date << std::endl 
		<< "Dimention: " << obj.m_item_dimention << std::endl 
		<< "Internal Pressure: " << obj.m_internal_pressure_at_normal_temperature_of_gas << std::endl 
		<< "Max. storage Temperature: " << obj.m_maximum_storage_temperature << std::endl 
		<< "Service Life: " << obj.m_service_life_duration << std::endl; 
	
	if(obj.m_special_feature.size() > 0) 
		os << "Special Features: " << obj.m_special_feature << std::endl; 
		
	os << "Price: " << obj.m_price_inr << " INR" << std::endl;

	return os; 
} 

std::ostream& operator<<(std::ostream& os, const fill_status_t& status) {
	os << ((status==FILLED) ? "Filled" : "Empty"); 	
	return os; 
} 