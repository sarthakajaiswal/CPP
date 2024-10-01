#include <iostream> 

#include "car.hpp" 
#include "vector_template.hpp" 

Car::Car(
	std::string car_name, 
	std::string model_name, 
	std::string company, 
	fuel_t fuel, 
	unsigned short displacement_cc, 
	
	std::string engine_type, 
	
	float average, 
	std::string average_unit, 
	std::vector<std::string> colour_varients, 
	
	double power, 
	power_unit_t power_unit, 
	unsigned int power_per_number_of_rpm, 			
	
	double torque, 
	torque_unit_t torque_unit,
	unsigned int torque_per_rpm_min_count, 
	unsigned int torque_per_rpm_max_count,

	unsigned char number_of_gears, 
	gear_t gear_type, 
	
	std::string fuel_system, 
	
	float length, 
	float width, 
	float height, 
	dimention_unit_t dimention_unit, 
	
	float wheel_base, 
	length_unit_t wheel_base_unit, 
	
	float ground_clearance, 
	length_unit_t ground_clearance_unit, 
	
	brake_t front_brake, 
	brake_t rear_brake, 
	
	std::string front_suspension_type, 
	std::string rear_suspension_type, 

	float tyre_width_mm, 
	float tyre_aspect_ratio_percent, 
	tyre_construction_t tyre_construction_type, 
	float tyre_rim_diameter_inch, 
	
	float turning_radius, 
	length_unit_t turning_radius_unit, 
	
	unsigned short seating_capacity, 
	
	unsigned long long ex_showroom_price_inr
) : 
	m_fuel(fuel), 
	m_displacement_cc(displacement_cc), 
	m_seating_capacity(seating_capacity), 
	m_front_brake_type(front_brake), 
	m_rear_brake_type(rear_brake), 
	m_front_suspension_type(front_suspension_type), 
	m_rear_suspension_type(rear_suspension_type), 
	m_model(model_name), 
	m_engine_type(engine_type), 
	m_fuel_system(fuel_system), 
	m_company(company), 
	m_car_name(car_name), 
	m_ex_showroom_price_inr(ex_showroom_price_inr), 
	m_colour_varients(colour_varients), 
	m_power(power, power_unit, power_per_number_of_rpm), 
	m_torque(
		torque, 
		torque_unit, 
		torque_per_rpm_min_count, 
		torque_per_rpm_max_count
	), 
	m_transmission(number_of_gears, gear_type), 
	m_dimention_info(
		wheel_base, wheel_base_unit, 
		ground_clearance, 
		ground_clearance_unit, 
		length, width, height, 
		dimention_unit
	), 
	m_turning_radius(turning_radius, turning_radius_unit), 
	m_average(average, average_unit), 
	m_tyre_info(
		tyre_width_mm, 
		tyre_aspect_ratio_percent, 
		tyre_construction_type, 
		tyre_rim_diameter_inch
	) {} 

std::ostream& operator<<(std::ostream& os, const Car& obj) {
	os << "_______CAR INFORMATION__________" << std::endl; 
	
	os << obj.m_car_name << std::endl  
		<< obj.m_company << std::endl 
		<< "Fuel: " << obj.m_fuel << std::endl 
		<< "Displacement: " << obj.m_displacement_cc << " cc" << std::endl 
		<< "Model Name: " << obj.m_model << std::endl 
		<< "Engine type: " << obj.m_engine_type << std::endl
		<< "Average: " << obj.m_average << std::endl 
		<< "Colour Varients: " << obj.m_colour_varients << std::endl 
		<< "Power: " << obj.m_power << std::endl 
		<< "Torque: " << obj.m_torque << std::endl 
		<< "Transmission: " << obj.m_transmission << std::endl 
		<< "Fuel System: " << obj.m_fuel_system << std::endl 
		<< "Car Dimention Info: " << std::endl << obj.m_dimention_info << std::endl 
		<< "Breaks: " << "Front: " << obj.m_front_brake_type << " Rear: " << obj.m_rear_brake_type << std::endl 
		<< "Suspention: " << std::endl << "Front: " << obj.m_front_suspension_type 
							<< std::endl << "Rear: " << obj.m_rear_suspension_type << std::endl 
		<< "Turning Radius: " << obj.m_turning_radius << std::endl 
		<< "Seating Capacity: " << obj.m_seating_capacity << std::endl 
		<< "Price: " << obj.m_ex_showroom_price_inr << " INR" << std::endl; 
		
	return os; 
} 

CarPower::CarPower(
	float power_value, 
	power_unit_t unit, 
	unsigned int min_unit_rpm_count
) : 
	Power(power_value, unit), m_unit_rpm_count(min_unit_rpm_count) {} 

std::ostream& operator<<(std::ostream& os, const CarPower& obj) {
	os << static_cast<Power>(obj) << " at " << obj.m_unit_rpm_count << "RPM"; 
	return os; 
} 

CarTorque::CarTorque(
	float value, 
	torque_unit_t unit, 
	unsigned short min_unit_rpm_count, 
	unsigned short max_unit_rpm_count 
) : 
	Torque(value, unit), 
	m_min_unit_rpm_count(min_unit_rpm_count), 
	m_max_unit_rpm_count(max_unit_rpm_count) {} 

std::ostream& operator<<(std::ostream& os, const CarTorque& obj) {
	os << static_cast<Torque>(obj) << " at " 
		<< obj.m_min_unit_rpm_count << " - " << obj.m_max_unit_rpm_count << "RPM"; 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const fuel_t& fuel) {
	switch(fuel) {
		case PETROL: 
			os << "Petrol"; 
			break;
		case DIESEL: 
			os << "Diesel"; 
			break; 
		case CHARGING: 
			os << "Charging"; 
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const brake_t& type) {
	switch(type) {
		case DISC: 
			os << "Disc"; 
			break; 
		case DRUM: 
			os << "Drum"; 
	} 
	return os; 
} 