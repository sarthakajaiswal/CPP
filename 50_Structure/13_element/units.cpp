#include <iostream> 
#include "units.hpp" 


std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit) {
	switch (unit) {
	case 0: 
		os << "Gigatonn"; 
		break; 
	case 1: 
		os << "Megantonn"; 
		break; 
	case 2: 
		os << "Tonn"; 
		break; 
	case 3: 
		os << "Quintal"; 
		break; 
	case 4: 
		os << "KG"; 
		break; 
	case 5: 
		os << "Gram"; 
		break; 
	case 6: 
		os << "Miligram"; 
		break; 
	case 7: 
		os << "Microgram"; 
		break; 
	case 8: 
		os << "Nanogram"; 
		break; 
	case 9: 
		os << "Picogram"; 
		break; 
	case 10: 
		os << "Dalton";
	}

	return os; 
}
std::ostream& operator<<(std::ostream& os, const density_unit_t& unit) {
	switch (unit) {
	case 0: 
		os << "g/mL"; 
		break; 
	case 1:
		os << "KG/L"; 
		break; 
	case 2: 
		os << "kilogram per cubic meter";
		break; 
	case 3: 
		os << "tonn per cubic meter"; 
		break; 
	case 4: 
		os << "gram per cubic centimeter"; 
		break; 
	case 5: 
		os << "megagram per cubic meter"; 
	}

	return os; 
}

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit) {
	switch (unit) {
	case 0: 
		os << "Miles"; 
		break; 
	case 1: 
		os << "Yard"; 
		break; 
	case 2: 
		os << "km"; 
		break; 
	case 3: 
		os << "meter"; 
		break; 
	case 4: 
		os << "cms"; 
		break; 
	case 5: 
		os << "milimeter"; 
		break; 
	case 6: 
		os << "micrometer"; 
		break; 
	case 7: 
		os << "nanometer"; 
		break; 
	case 8: 
		os << "picometer"; 
	}

	return os; 
}

std::ostream& operator<<(std::ostream& os, const energy_unit_t& unit) {
	switch (unit) {
	case 0: 
		os << "Joule"; 
		break; 
	case 1: 
		os << "Watt"; 
		break; 
	case 2: 
		os << "kiloWatt-Hour"; 
		break; 
	case 3: 
		os << "Calorie"; 
		break; 
	case 4: 
		os << "BTU"; 
		break; 
	case 5: 
		os << "eV"; 
		break; 
	case 6: 
		os << "Hartree"; 
	}

	return os; 
}

std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit) {
	switch (unit) {
	case 0: 
		os << "degree celcius"; 
		break; 
	case 1: 
		os << "degree farenheit"; 
		break; 
	case 2: 
		os << "Kelvin"; 
	}

	return os; 
}

std::ostream& operator<<(std::ostream& os, const abundance_unit_t& unit) {
	switch (unit) {
	case 0: 
		os << "Miligrams per kilogram"; 
		break; 
	case 1: 
		os << "miligrams per liter"; 
		break; 
	case 2: 
		os << "grams per kilogram"; 
		break; 
	case 3: 
		os << "grams per liter"; 
	}

	return os; 
}