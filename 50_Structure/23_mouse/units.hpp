#ifndef _UNITS_HPP 
#define _UNITS_HPP 

#define CASE(unit, unit_string) case unit: os << unit_string; break; 

enum length_unit_t {
	LIGHT_YEAR, 
	MILE, KM, M, CM, MM, MICROMETER, NANOMETER, ARMSTRONG 
}; 

enum weight_unit_t {
	TONN, QUINTAL, 
	KG, GM, MG, MICROGRAM, 
	POUND
}; 

enum voltage_unit_t {
	V, KV, MV, MILIVOLT, MICROVOLT
}; 

enum current_unit_t {
	MEGAAMPERE, KILOAMPERE, AMPERE, 
	MILIAMPERE, MICROAMPERE
}; 

enum temperature_unit_t {
	DEGREE_CELCIUS, DEGREE_FARENHEIT, KELVIN
}; 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const voltage_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const current_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit); 

#endif /* _UNTITS_HPP */ 