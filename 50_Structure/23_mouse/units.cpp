#include <iostream> 
#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit) {
	switch (unit) {
		CASE(LIGHT_YEAR, "light year"); 
		CASE(MILE, "miles"); 
		CASE(KM, "km"); 
		CASE(M, "gm"); 
		CASE(CM, "cm"); 
		CASE(MM, "mm"); 
		CASE(MICROMETER, "micrometer"); 
		CASE(NANOMETER, "nm"); 
	}
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit) {
	switch (unit) {
		CASE(TONN, "tonn"); 
		CASE(QUINTAL, "Qt."); 
		CASE(KG, "kg"); 
		CASE(GM, "gm"); 
		CASE(MG, "mg"); 
		CASE(MICROGRAM, "mg"); 
		CASE(POUND, "pound"); 
	}
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit) {
	switch(unit) {
		CASE(DEGREE_CELCIUS, "degree celcius");
		CASE(DEGREE_FARENHEIT, "degree farenheit"); 
		CASE(KELVIN, "kelvin"); 
	}
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const current_unit_t& unit) {
	switch (unit) {
		CASE(AMPERE, "A"); 
		CASE(KILOAMPERE, "kA"); 
		CASE(MEGAAMPERE, "mega ampere"); 
		CASE(MILIAMPERE, "mili ampere"); 
		CASE(MICROAMPERE, "microampere"); 
	} 
	return os; 
}

std::ostream& operator<<(std::ostream& os, const voltage_unit_t& unit) {
	switch (unit) {
		CASE(V, "V"); 
		CASE(KV, "kV"); 
		CASE(MV, "MV"); 
		CASE(MILIVOLT, "mV"); 
		CASE(MICROVOLT, "microvolt"); 
	}
	return os; 
} 