#ifndef _UNITS_HPP 
#define _UNITS_HPP 

#ifndef CASE
#define CASE(unit, unit_string)	case unit: os << unit_string; break;  
#endif /* CASE */ 

#include <iostream> 

enum length_unit_t{
	MILE, KILOMETER, YARD, METER, CENTIMETER, INCH, FOOT, 
	MILIMETER, MICROMETER, PICOMETER, ARMSTRONG 
}; 

enum weight_unit_t{
	TONN, QUINTAL, KILOGRAM, GRAM, 
	MILIGRAM, MICROGRAM, PICOGRAM 
}; 

enum pressure_unit_t{
	BAR, 
	KILOGRAM_PER_CENTIMETER_SQUARE,
	GRAM_PER_CENTIMETER_SQUARE, 
	PASCAL, 
	ATM, 
	POUNDS_PER_SQUARE_INCH, 
	NEWTON_PER_CENTIMETER_SQUARE 
}; 

enum temperature_unit_t{
	KELVIN, DEGREE_CELCIUS, DEGREE_FARENHEIT 
}; 

enum duration_unit_t{
	YEAR, MONTH, WEEK, DAY, HOUR, MINUTE, 
	SECOND, MILISECOND, MICROSECOND
}; 

typedef length_unit_t dimention_unit_t; 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const pressure_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit); 

#endif /* _UNITS_HPP */ 