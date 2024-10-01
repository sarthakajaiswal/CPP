#include <iostream> 
#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit) {
	switch(unit) {
		CASE(MILE, "Mile"); 
		CASE(YARD, "Yard"); 
		CASE(KILOMETER, "KM"); 
		CASE(METER, "m"); 
		CASE(FOOT, "Ft."); 
		CASE(INCH, "inch"); 
		CASE(CENTIMETER, "cm"); 
		CASE(MILIMETER, "mm"); 
		CASE(MICROMETER, "micrometer"); 
		CASE(NANOMETER, "nm"); 
		CASE(PICOMETER, "pm"); 
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const power_unit_t& unit) {
	switch(unit) {
		CASE(KILOWATT_HOUR, "KH"); 
		CASE(WATT, "W"); 
		CASE(KILOWATT, "kW"); 
		CASE(BTU, "BTU"); 
		CASE(HORSE_POWER, "HP"); 
		CASE(PS, "PS"); 
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const torque_unit_t& unit) {
	switch(unit) {
		CASE(NEWTON_METER, "Nm"); 
		CASE(POUND_FOOT, "lb.ft"); 
	} 
	return os; 
} 