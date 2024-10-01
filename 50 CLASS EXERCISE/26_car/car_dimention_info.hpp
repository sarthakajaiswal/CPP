#ifndef _CAR_DIMENTION_INFO_HPP 
#define _CAR_DIMENTION_INFO_HPP 

#include <iostream> 

#include "length.hpp" 
#include "units.hpp" 
#include "item_dimention.hpp" 

typedef length_unit_t dimention_unit_t; 

class CarDimentionInfo{
	private: 
		Length m_wheel_base; 
		Length m_min_ground_clearance; 
		Length m_max_ground_clearance; 
		ItemDimention m_dimention; 
		
	public: 
		CarDimentionInfo(
			float wheel_base_value, 
			length_unit_t wheel_base_unit,
			
			float ground_clearance, 
			length_unit_t ground_clearance_unit, 
			
			float length, 
			float width, 
			float height, 
			dimention_unit_t dimention_unit
		); 
		
		CarDimentionInfo(
			float wheel_base_value, 
			length_unit_t wheel_base_unit, 
			
			float min_ground_clearance, 
			float max_ground_clearance, 
			length_unit_t ground_clearance_unit, 
			
			float length, 
			float width, 
			float height, 
			dimention_unit_t dimention_unit 
		); 
		
	friend std::ostream& operator<<(std::ostream& os, const CarDimentionInfo& obj); 
}; 

#endif /* _CAR_DIMENTION_INFO_HPP */ 