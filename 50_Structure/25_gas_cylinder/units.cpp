#include <iostream> 
#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit) {
	switch(unit) {
		CASE(MILE, "mile"); 
		CASE(KILOMETER, "KM"); 
		CASE(YARD, "Yard"); 
		CASE(METER, "m"); 
		CASE(CENTIMETER, "cm"); 
		CASE(INCH, "inch"); 
		CASE(FOOT, "Ft."); 
		CASE(MILIMETER, "mm"); 
		CASE(MICROMETER, "micrometer"); 
		CASE(PICOMETER, "Picometer"); 
		CASE(ARMSTRONG, "Armstrong"); 
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit) {
	switch(unit) {
		CASE(YEAR, "Yrs."); 
		CASE(MONTH, "months"); 
		CASE(DAY, "days"); 
		CASE(HOUR, "Hrs."); 
		CASE(MINUTE, "mins"); 
		CASE(SECOND, "secs"); 
		CASE(MILISECOND, "ms"); 
		CASE(MICROSECOND, "microsecond"); 
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit) {
	switch(unit){
		CASE(TONN, "tonn"); 
		CASE(QUINTAL, "Qt."); 
		CASE(KILOGRAM, "Kg"); 
		CASE(GRAM, "g"); 
		CASE(MILIGRAM, "mg"); 
		CASE(MICROGRAM, "mcg"); 
		CASE(PICOGRAM, "picogram");  
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const pressure_unit_t& unit) {
	switch(unit) {
		CASE(BAR, "Bar"); 
		CASE(KILOGRAM_PER_CENTIMETER_SQUARE, "Kg/cm2"); 
		CASE(GRAM_PER_CENTIMETER_SQUARE, "g/cm2"); 
		CASE(PASCAL, "Pa"); 
		CASE(ATM, "atm"); 
		CASE(POUNDS_PER_SQUARE_INCH, "pound/inch2"); 
		CASE(NEWTON_PER_CENTIMETER_SQUARE, "N/cm2"); 
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit) {
	switch(unit) {
		CASE(KELVIN, "K"); 
		CASE(DEGREE_CELCIUS, "degree celcius"); 
		CASE(DEGREE_FARENHEIT, "degree farenheit"); 
	} 
	return os; 
} 