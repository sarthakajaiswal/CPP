#include <iostream> 
#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const weight_unit& unit) {
	switch(unit) {
		CASE(TONN, "Tonn"); 
		CASE(QUINTAL, "Qt."); 
		CASE(KILOGRAM, "KG"); 
		CASE(POUND, "pound"); 
		CASE(GRAM, "g"); 
		CASE(MILIGRAM, "mg"); 
		CASE(MICROGRAM, "mcg"); 
	} 
	return os; 
} 
 
std::ostream& operator<<(std::ostream& os, const storage_unit& unit) {
	switch(unit) {
		CASE(TB, "TB"); 
		CASE(GB, "GB"); 
		CASE(MB, "MB"); 
		CASE(KB, "KB"); 
		CASE(B, "B"); 
		CASE(BIT, "bit"); 
	} 
	return os; 
}

std::ostream& operator<<(std::ostream& os, const length_unit& unit) {
	switch(unit) {
		CASE(MILES, "miles"); 
		CASE(YARD, "yard"); 
		CASE(FOOT, "ft."); 
		CASE(INCH, "inch"); 
		CASE(KILOMETER, "km"); 
		CASE(METER, "m"); 
		CASE(CENTIMETER, "cm"); 
		CASE(MILIMETER, "mm"); 
		CASE(MICROMETER, "micrometer"); 
		CASE(NANOMETER, "nm"); 
		CASE(PICOMETER, "pm"); 
	} 
	return os; 
}  

std::ostream& operator<<(std::ostream& os, const data_transfer_speed_unit& unit) {
	switch(unit) {
		CASE(BPS, "bps"); 
		CASE(KBPS, "kbps"); 
		CASE(MBPS, "mbps"); 
		CASE(GBPS, "gbps"); 
		CASE(TBPS, "tbps"); 
	} 
	return os; 
} 