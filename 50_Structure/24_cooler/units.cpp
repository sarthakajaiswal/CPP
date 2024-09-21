#include <iostream> 
#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit) {
	switch(unit) {
		CASE(MILE, "Mile"); 
		CASE(KILOMETER, "km"); 
		CASE(YARD, "Yard"); 
		CASE(FOOT, "foot"); 
		CASE(INCH, "inch"); 
		CASE(CENTIMETER, "cm"); 
		CASE(METER, "m");
		CASE(MILIMETER, "mm"); 
		CASE(MICROMETER, "micrometer"); 
		CASE(NANOMETER, "nm"); 
		CASE(PICOMETER, "picometer"); 
	} 
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const current_unit_t& unit) {
	switch(unit) {
		CASE(AMPERE, "A"); 
		CASE(MILIAMPERE, "mA"); 
		CASE(MICROAMPERE, "micro ampere");
		CASE(KILOAMPERE, "kilo ampere"); 
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const voltage_unit_t& unit) {
	switch(unit) {
		CASE(VOLT, "V"); 
		CASE(KILOVOLT, "KV"); 
		CASE(MEGAVOLT, "MV"); 
		CASE(MILIVOLT, "mV"); 
	}
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const frequency_unit_t& unit) {
	switch(unit) {
		CASE(HERTZ, "Hz"); 
		CASE(KILOHERTZ, "kHz"); 
	}
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit) {
	switch(unit) {
		CASE(TONN, "tonn"); 
		CASE(QUINTAL, "Qt."); 
		CASE(KILOGRAM, "Kg"); 
		CASE(GRAM, "g"); 
		CASE(MILIGRAM, "mg"); 
		CASE(MICROGRAM, "mcg"); 
		CASE(POUND, "Pound"); 
		CASE(LBS, "lbs"); 
	} 
	return os; 
} 