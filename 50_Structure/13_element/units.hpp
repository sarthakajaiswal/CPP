#ifndef _UNITS_HPP 
#define _UNITS_HPP 

typedef enum weight_unit {
	GIGATONN = 0, 
	MEGATONN, 
	TONN,
	QUINTAL,
	KILOGRAM, 
	GRAM, 
	MILIGRAM,
	MICROGRAM, 
	NANOGRAM, 
	PICOGRAM, 
	DALTON
}weight_unit_t;

typedef enum density_unit {
	GRAM_PER_MILIMETER=0, 
	KILOGRAM_PER_LITER, 

	KILOGRAM_PER_CUBIC_METER, 
	TONN_PER_CUBIC_METER, 
	GRAM_PER_CUBIC_CENTIMETER, 
	MEGAGRAM_PER_CUBIC_METER, 
}density_unit_t; 

typedef enum length_unit {
	MILES=0, 
	YARD, 
	KM, 
	METER, 
	CENTIMETER, 
	MILIMETER, 
	MICROMETER, 
	NANOMETER, 
	PICOMETER, 
}length_unit_t; 

typedef enum energy_unit {
	JOULE=0, 
	WATT, 
	KILOWATT_HOUR, 
	CALORIE, 
	BTU, 
	ELECTRON_VOLT, 
	HARTREE, 
}energy_unit_t;

typedef enum temperature_unit {
	DEGREE_CELCIUS = 0, 
	DEGREE_FARENHEIT, 
	KELVIN
}temperature_unit_t;	

typedef enum abundance_unit {
	MILIGRAM_PER_KILOGRAM=0, 
	MILIGRAM_PER_LITER, 

	GRAM_PER_KILOGRAM, 
	GRAM_PER_LITER, 
}abundance_unit_t; 

std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const density_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const length_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const energy_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit); 
std::ostream& operator<<(std::ostream& os, const abundance_unit_t& unit); 

#endif 
