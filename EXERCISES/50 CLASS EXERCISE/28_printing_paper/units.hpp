#ifndef _UNITS_HPP 
#define _UNITS_HPP 

enum weight_unit{
	TONN=0, 
	QUINTAL, POUND, KILOGRAM, GRAM, MILIGRAM, MICROGRAM
}; 

enum length_unit{
	MILE, 
	KILOMETER, FOOT, INCH, METER, CENTIMETER, MILIMETER, PICOMETER, NANOMETER, MICROMETER, ARMSTRONG
}; 

enum multiplier_unit{
	ONES,
	THOUSAND, LAKH, CRORE, MILLION, BILLION, TRILLION
};

std::ostream& operator<<(std::ostream& os, const weight_unit& unit); 
std::ostream& operator<<(std::ostream& os, const length_unit& unit); 
std::ostream& operator<<(std::ostream& os, multiplier_unit& unit); 

#endif /* _UNITS_HPP */ 