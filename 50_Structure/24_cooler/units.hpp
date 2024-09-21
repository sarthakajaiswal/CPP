#ifndef _UNITS_HPP 
#define _UNITS_HPP 

#define CASE(unit, unit_string)		case unit: os << unit_string; break; 

#include <iostream> 

enum length_unit_t {
	MILE, KILOMETER, YARD, FOOT, INCH, 
	METER, CENTIMETER, MILIMETER, MICROMETER, NANOMETER, PICOMETER
}; 

enum current_unit_t {
	AMPERE, KILOAMPERE, MILIAMPERE, MICROAMPERE
}; 

enum voltage_unit_t {
	VOLT, KILOVOLT, MEGAVOLT, MILIVOLT 
}; 

enum frequency_unit_t {
	HERTZ, KILOHERTZ, 
}; 

enum weight_unit_t {
	TONN, QUINTAL, KILOGRAM, GRAM, 
	MILIGRAM, MICROGRAM, POUND, LBS 
}; 

typedef length_unit_t dimention_unit_t; 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const current_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const voltage_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const frequency_unit_t& unit); 

#endif /* _UNITS_HPP */ 