#include <iostream> 
#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const weight_unit& unit) {
	switch(unit) {
		case TONN: 
			os << "Tonn"; 
			break; 
		case QUINTAL: 
			os << "Quintal"; 
			break; 
		case POUND: 
			os << "Pound"; 
			break; 
		case KILOGRAM: 
			os << "KG"; 
			break; 
		case GRAM: 
			os << "G"; 
			break; 
		case MILIGRAM: 
			os << "mg"; 
			break; 
		case MICROGRAM: 
			os << "mcg"; 
			break; 
		default: 
			break; 
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const length_unit& unit) {
	switch(unit) {
		case MILE: 
			os << "Mile"; 
			break; 
		case KILOMETER: 
			os << "KM"; 
			break; 
		case FOOT: 
			os << "Ft."; 
			break; 
		case INCH: 
			os << "Inch"; 
			break; 
		case METER: 
			os << "m"; 
			break; 
		case CENTIMETER: 
			os << "cm"; 
			break; 
		case MILIMETER: 
			os << "mm"; 
			break; 
		case MICROMETER: 
			os << "micrometer"; 
			break; 
		case NANOMETER: 
			os << "nm"; 
			break; 
		case PICOMETER: 
			os << "pm"; 
			break; 
		case ARMSTRONG: 
			os << "Armstrong"; 
			break; 
		default: 
			break; 
	} 
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const multiplier_unit& unit) {
	switch(unit) {
		case THOUSAND: 
			os << "k"; 
			break; 
		case LAKH: 
			os << "L"; 
			break; 
		case CRORE: 
			os << "Cr"; 
			break; 
		case MILLION: 
			os << "M"; 
			break; 
		case BILLION: 
			os << "B"; 
			break; 
		case TRILLION: 
			os << "T"; 
			break;
	} 
	return os; 
} 