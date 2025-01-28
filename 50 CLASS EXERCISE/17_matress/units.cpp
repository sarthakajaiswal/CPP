#include <iostream> 
#include <cstring> 

#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const currency_t& currency){
	switch(currency) {
		case RUPEES: 
			os << "Rs."; 
			break; 
		case DOLLAR: 
			os << "$"; 
	}
	
	return os; 
}

std::ostream& operator<<(std::ostream& os, const matress_size_t& size) {
	switch(size) {
		case CALIFORNIA_KING: 
			os << "California King"; 
			break; 
		
		case FULL: 
			os << "Full"; 
			break; 
		
		case KING: 
			os << "King"; 
			break; 
		
		case QUEEN: 
			os << "Queen"; 
			break; 

		case TWIN: 
			os << "Twin"; 		
	} 
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const matress_style_t& style) {
	switch(style) {
		case COOLING_COMFORT: 
			os << "Cooling comfort"; 
			break; 

		case ENHANCED_SUPPORT: 
			os << "Enhaced Support";
			break; 

		case PLUSH_SUPPORT: 
			os << "Plush Support";  
	}
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const water_resistant_t& water_resistance) {
	switch(water_resistance) {
		case IPX0: 
			os << "Not Resistant"; 
			break; 
		
		case IPX1: 
			os << "Protected against vetically falling water drops";
			break; 

		case IPX2: 
			os << "Protected against vertically falling water drops when encloser titled upto 15 degress"; 
			break; 
		
		case IPX3: 
			os << "Protected agaist spraying water"; 
			break; 
		
		case IPX4: 
			os << "protected agaist splashing water"; 
			break; 

		case IPX5: 
			os << "protected against water jets"; 
			break; 

		case IPX6: 
			os << "protected aginst powerful water jets"; 
			break; 
		
		case IPX7: 
			os << "protected against effects of temporary immersion in water";
			break; 

		case IPX8: 
			os << "Protected against effects of continuous immersion in water"; 
			break; 

		case IPX9: 
			os << "Protected against high pressure and temperature water jets";  
	}
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit) {
	switch(unit) {
		case INCHES: 
			os << "Inches"; 
			break; 

		case FEET: 
			os << "feet"; 
			break; 
		
		case MILES: 
			os << "Miles"; 
			break; 
		
		case YARD: 
			os << "Yard";
			break; 
		
		case KILOMETER: 
			os << "KM"; 
			break; 

		case METER: 
			os << "meter"; 
			break; 

		case CENTIMETER: 
			os << "CM";
			break; 

		case MILIMETER: 
			os << "mm";  
	}
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit) {
	switch(unit) {
		case KILOGRAM: 
			os << "KG"; 
			break; 

		case GRAM: 
			os << "Gm.";
			break;
		
		case MILIGRAM: 
			os << "mg.";
			break;

		case QUINTAL: 
			os << "Qt.";
			break; 

		case TONN: 
			os << "tonn"; 
			break; 

		case POUND: 
			os << "Pounds"; 
	}
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const multiplier_t& multiplier) {
	switch(multiplier) {
		case TRILLION:
			os << "trillion"; 
			break; 

		case BILLION: 
			os << "billion"; 
			break; 

		case MILLION: 
			os << "Million"; 
			break; 

		case CRORE: 
			os << "Cr."; 
			break; 

		case LAKHS: 
			os << "Lakh"; 
			break; 

		case THOUSAND: 
			os << "K"; 
			break; 
		
		case ONES: 
			os << ""; 
	}
	
	return os; 
} 	