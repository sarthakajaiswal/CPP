#ifndef _CAR_HPP 
#define _CAR_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "power.hpp" 
#include "torque.hpp" 
#include "car_transmission.hpp" 
#include "car_dimention_info.hpp" 
#include "length.hpp" 
#include "fuel_average.hpp" 
#include "tyre_info.hpp" 

enum fuel_t { DIESEL, PETROL, CNG, CHARGING }; 
enum brake_t { DRUM, DISC };  

class CarPower : public Power{
	private: 
		unsigned short m_unit_rpm_count; 
	
	public: 
		CarPower(float power_value, 
			power_unit_t unit, 
			unsigned int min_unit_rpm_count
		);

		friend std::ostream& operator<<(std::ostream& os, const CarPower& obj); 
}; 

class CarTorque : public Torque{
	private: 
		unsigned short m_min_unit_rpm_count; 
		unsigned short m_max_unit_rpm_count; 
	
	public: 
		CarTorque(
			float value, 
			torque_unit_t unit, 
			unsigned short min_unit_rpm_count, 
			unsigned short max_unit_rpm_count 
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const CarTorque& obj); 
}; 

class Car{
	private: 
		fuel_t m_fuel; 
		unsigned short m_displacement_cc; 
		std::string m_fuel_system; 
		//unsigned short m_boot_space; 
		//bool is_boot_space_expandable; 
		unsigned short m_seating_capacity; 
		brake_t m_front_brake_type; 
		brake_t m_rear_brake_type; 
		std::string m_front_suspension_type; 
		std::string m_rear_suspension_type; 
		std::string m_model; 
		std::string m_engine_type; 
		std::string m_company; 
		std::string m_car_name; 
		unsigned long long m_ex_showroom_price_inr; 
		std::vector<std::string> m_colour_varients; 
		
		CarPower m_power; 
		CarTorque m_torque; 
		CarTransmission m_transmission; 
		CarDimentionInfo m_dimention_info; 
		Length m_turning_radius; 
		FuelAverage m_average; 
		TyreInfo m_tyre_info; 
		
	public: 
		Car(
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
			unsigned int torque_per_rpm_lower_limit, 
			unsigned int torque_per_rpm_upper_limit,

			unsigned char number_of_gears, 
			gear_t gear_type, 
			
			std::string fuel_system, 
			
			float length, 
			float width, 
			float heigth, 
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
			
			unsigned long long ex_showroom_price 
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Car& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const brake_t& type); 
std::ostream& operator<<(std::ostream& os, const fuel_t& type); 

#endif /* _CAR_HPP */ 