#include <iostream> 
#include "mouse.hpp" 
#include "vector_template.hpp" 

Mouse::Mouse(
	std::string brand, 

	unsigned short dpi, 
	std::vector<std::string> interface, 
	mouse_sensor_t sensor, 
	std::string colour,
	std::vector<std::string> compatible_devices, 
	std::vector<std::string> compatible_os, 
	mouse_t mouse_type, 
	
	float product_dim_1, 
	float product_dim_2, 
	float product_dim_3, 
	length_unit_t dimention_unit, 
	dimention_format_t dimention_format, 
	
	double item_weight, 
	weight_unit_t weight_unit, 
	
	double cable_length, 
	length_unit_t length_unit, 
	
	unsigned short number_of_buttons, 
	
	voltage_t working_voltage_type, 
	double working_voltage, 
	voltage_unit_t working_voltage_unit, 
	float working_voltage_error_percent, 
	
	double working_current_min_val, 
	current_unit_t current_min_val_unit, 
	double working_current_max_val, 
	current_unit_t working_current_unit, 
	
	double working_temperature_min_val, 
	double working_temperature_max_val, 
	temperature_unit_t working_temperature_unit, 
	
	float working_humidity_min_percent, 
	float working_humidity_max_percent, 
	
	double min_storage_temperature, 
	double max_storage_temperature, 
	temperature_unit_t storage_temperature_unit, 
	
	float min_storage_humidity_percent,  
	float max_storage_humidity_percent, 
	
	unsigned short frame_per_second, 
	std::string button_life, 
	
	std::vector<std::string> box_components,

	std::string manufacturer_name,
	std::string manufacturer_state, 
	std::string manufacturer_country, 
	std::string manufacturer_website, 
	std::string manufacturer_email, 
	std::vector<unsigned long long> manufacturer_contacts 
) : 
	m_sensor(sensor), 
	m_mouse_type(mouse_type), 
	m_min_working_humidity_percent(working_humidity_min_percent), 
	m_max_working_humidity_percent(working_humidity_max_percent), 
	m_min_storage_humidity_percent(min_storage_humidity_percent), 
	m_max_storage_humidity_percent(max_storage_humidity_percent), 
	
	m_frames_per_second(frame_per_second), 
	m_number_of_buttons(number_of_buttons), 
	m_dpi(dpi), 
	m_brand(brand), 
	m_colour(colour), 
	m_button_life(button_life), 
	m_compatible_devices(compatible_devices), 
	m_compatible_os(compatible_os), 
	m_user_interface(interface), 
	m_in_the_box(box_components), 
	m_product_dimention(
		product_dim_1, 
		product_dim_2, 
		product_dim_3, 
		dimention_unit, 
		dimention_format
	), 
	m_weight(item_weight, weight_unit), 
	m_cable_length(cable_length, length_unit), 
	m_working_voltage(
		working_voltage, 
		working_voltage_unit, 
		working_voltage_type, 
		working_voltage_error_percent 
	), 
	m_min_working_current(working_current_min_val, working_current_unit), 
	m_max_working_current(working_current_max_val, working_current_unit), 
	m_min_working_temperature(working_temperature_min_val, working_temperature_unit), 
	m_max_working_temperature(working_temperature_max_val, working_temperature_unit), 
	m_manufacturer(
		manufacturer_name, "", 
		manufacturer_country, 
		manufacturer_website, 
		manufacturer_email, 
		manufacturer_contacts
	) {} 
	
std::ostream& operator<<(std::ostream& os, const Mouse& obj) {
	os << "_____MOUSE_____" << std::endl; 
	
	os << "Product Features: " << std::endl 
		<< "DPI: " << obj.m_dpi << std::endl 
		<< "Interface: " << obj.m_user_interface << std::endl 
		<< "Sensor: " << obj.m_sensor << std::endl 
		<< "Colour: " << obj.m_colour << std::endl 
		<< "Compatible Devices: " << obj.m_compatible_devices << std::endl 
		<< "Compatible OS: " << obj.m_compatible_os << std::endl 
		<< "Mouse Type: " << obj.m_mouse_type << std::endl 
		<< "Product Specifications: " << std::endl 
		<< "Product Size: " << obj.m_product_dimention << std::endl 
		<< "Item Weight: " << obj.m_weight << std::endl 
		<< "Number of Buttons: " << obj.m_number_of_buttons << std::endl 
		<< "Cable Length: " << obj.m_cable_length << std::endl 
		<< "Working Voltage: " << obj.m_working_voltage << std::endl 
		<< "Working Current: " << obj.m_min_working_current << " - " << obj.m_max_working_current << std::endl  
		<< "Working Temperature: " << obj.m_min_working_temperature << " - " << obj.m_max_working_temperature << std::endl 
		<< "Storage Humidity: " << obj.m_min_storage_humidity_percent << "% to " << obj.m_max_storage_humidity_percent << "%" << std::endl 
		<< "Frame Rate: " << obj.m_frames_per_second << "FPS" << std::endl 
		<< "Button Life: " <<  obj.m_button_life  << std::endl 
		<< "Contents: " << obj.m_in_the_box << std::endl 
		<< "Manufacturer: " << obj.m_manufacturer << std::endl; 
		
		return os; 
}

std::ostream& operator<<(std::ostream& os, const mouse_sensor_t& sensor) {
	switch(sensor) {
		case OPTICAL:
			os << "Optical"; 
			break; 
		case LASER: 
			os << "Laser"; 
			break; 
	}
	return os; 
}

std::ostream& operator<<(std::ostream& os, const mouse_t& type) {
	switch(type) {
		case OFFICE: 
			os << "Office";
			break; 
		case GAMING:
			os << "Gaming"; 
			break; 
	}
	return os; 
}