#ifndef _UNITS_HPP 
#define _UNITS_HPP 

#define CASE(unit, unit_string)	case unit: os << unit_string; break; 

#include <iostream> 

enum weight_unit{
	TONN, QUINTAL, KILOGRAM, POUND, 
	GRAM, MILIGRAM, MICROGRAM 
}; 

enum storage_unit{
	TB, GB, MB, KB, B, BIT
}; 

enum length_unit{
	MILES, YARD, FOOT, INCH, KILOMETER, METER, CENTIMETER, 
	MILIMETER, MICROMETER, NANOMETER, PICOMETER
}; 

enum data_transfer_speed_unit{
	BPS, KBPS, MBPS, GBPS, TBPS 
}; 

typedef length_unit dimention_unit; 

std::ostream& operator<<(std::ostream& os, const weight_unit& unit); 
std::ostream& operator<<(std::ostream& os, const storage_unit& unit); 
std::ostream& operator<<(std::ostream& os, const length_unit& unit); 
std::ostream& operator<<(std::ostream& os, const data_transfer_speed_unit& unit); 

#endif /* _UNITS_HPP */ 