#ifndef _UNITS_HPP 
#define _UNITS_HPP 

#define CASE(unit, unit_string)	case unit: os << unit_string; break; 

enum length_unit_t{
	MILE, YARD, KILOMETER, METER, 
	FOOT, INCH, CENTIMETER, MILIMETER, 
	MICROMETER, NANOMETER, PICOMETER
}; 

enum power_unit_t{
	KILOWATT_HOUR, WATT, KILOWATT, BTU, HORSE_POWER, PS
}; 

enum torque_unit_t{
	NEWTON_METER, POUND_FOOT
}; 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const power_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const torque_unit_t& unit); 

#endif /* _UNITS_HPP */ 