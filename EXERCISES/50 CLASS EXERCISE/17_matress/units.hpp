#ifndef _UNITS_HPP 
#define _UNITS_HPP 

#include <iostream> 

typedef enum currency {
	RUPEES = 0, 
	DOLLAR	
}currency_t; 

typedef enum matress_available_size {
	CALIFORNIA_KING = 0, 
	FULL, 
	KING, 
	QUEEN, 
	TWIN
}matress_size_t; 

typedef enum matress_available_style {
	COOLING_COMFORT = 0, 
	ENHANCED_SUPPORT, 
	PLUSH_SUPPORT
}matress_style_t; 

typedef enum water_resistancy_level {
	IPX0 = 0, 
	IPX1, 
	IPX2, 
	IPX3, 
	IPX4, 
	IPX5, 
	IPX6, 
	IPX7, 
	IPX8, 
	IPX9
}water_resistant_t; 

typedef enum length_unit {
	INCHES = 0, 
	FEET, 
	MILES, 
	YARD, 
	KILOMETER, 
	METER, 
	CENTIMETER, 
	MILIMETER,  
}length_unit_t; 

typedef enum weight_unit {
	KILOGRAM = 0, 
	GRAM, 
	MILIGRAM, 
	QUINTAL, 
	TONN, 
	POUND
}weight_unit_t; 

typedef enum multiplier_unit {
	TRILLION = 0, 
	BILLION, 
	MILLION, 
	CRORE, 
	LAKHS, 
	THOUSAND, 
	ONES
}multiplier_t; 

std::ostream& operator<<(std::ostream& os, const currency_t& currency); 
std::ostream& operator<<(std::ostream& os, const matress_style_t& style); 
std::ostream& operator<<(std::ostream& os, const matress_size_t& size);  
std::ostream& operator<<(std::ostream& os, const water_resistant_t& water_resistance); 
std::ostream& operator<<(std::ostream& os, const length_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const multiplier_t& unit); 

#endif 