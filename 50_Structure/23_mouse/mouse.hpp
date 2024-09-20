#ifndef _MOUSE_HPP 
#define _MOUSE_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "dimention.hpp" 
#include "current.hpp" 
#include "voltage.hpp" 
#include "temperature.hpp" 
#include "units.hpp" 
#include "length.hpp" 
#include "organization.hpp" 
#include "weight.hpp" 

enum mouse_sensor_t {OPTICAL, LASER}; 
enum mouse_t {OFFICE, GAMING}; 

class Mouse {
	private: 
		mouse_sensor_t m_sensor; 
		mouse_t m_mouse_type; 
	
		float m_min_working_humidity_percent; 
		float m_max_working_humidity_percent; 
		float m_min_storage_humidity_percent; 
		float m_max_storage_humidity_percent; 
		
		unsigned short m_frames_per_second; 	
		unsigned short m_number_of_buttons; 
	
		std::string m_brand; 
		std::string m_colour; 
		std::string m_button_life; 
		
		unsigned short m_dpi; 
		
		std::vector <std::string> m_compatible_devices; 
		std::vector <std::string> m_compatible_os; 
		std::vector <std::string> m_user_interface; 
		std::vector <std::string> m_in_the_box; 
		
		Dimention m_product_dimention; 
		Weight m_weight; 
		Length m_cable_length; 
		Voltage m_working_voltage; 
		Current m_min_working_current; 
		Current m_max_working_current; 
		Temperature m_min_working_temperature; 
		Temperature m_max_working_temperature; 
		Organization m_manufacturer; 
		
	public: 
		Mouse(
			std::string brand, 
			
			unsigned short dpi, 
			std::vector<std::string> interface, 
			mouse_sensor_t sensor, 
			std::string colour, 
			std::vector<std::string> compatible_devices, 
			std::vector <std::string> compatible_os, 
			mouse_t mouse, 
			
			float product_dimention_1,  
			float product_dimention_2, 
			float product_dimention_3, 
			length_unit_t dimention_unit, 
			dimention_format_t dimention_format, 
			 
			double item_weight, 
			weight_unit_t weight_unit, 
			
			double cable_length, 
			length_unit_t cable_length_unit, 
			
			unsigned short number_of_buttons, 
			
			voltage_t working_voltage_t, 
			double working_voltage, 
			voltage_unit_t working_voltage_unit, 
			float working_voltage_erorr_correction, 
			
			double working_current_min_val,
			current_unit_t current_min_val_unit, 
			double working_current_max_val, 
			current_unit_t current_max_val_unit, 
			
			double min_working_temperature, 
			double max_working_temperature, 
			temperature_unit_t working_temperature_unit, 
			
			float working_humidity_min_percent, 
			float working_humidity_max_percent, 
			
			double storage_temperature_min_value, 
			double storage_temperature_max_value, 
			temperature_unit_t storage_temperature_unit, 
			
			float min_storage_humidity_percent, 
			float max_storage_humidity_percent, 
			
			unsigned short frame_per_second, 
			std::string button_life, 
			
			std::vector<std::string> box_contents, 
			
			std::string manufacturer_name,  
			std::string manufacturer_state, 
			std::string manufacturer_country, 
			std::string manufacturer_website, 
			std::string manufacturer_email,
			std::vector <unsigned long long> manufacturer_contacts
		);
	
	friend std::ostream& operator<<(std::ostream& os, const Mouse& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const mouse_sensor_t& sensor); 
std::ostream& operator<<(std::ostream& os, const mouse_t& type); 

#endif /* _MOUSE_HPP */ 