#include <iostream> 
#include "gas_cylinder.hpp" 

int main(void) {
	GasCylinder indane(
		"Indane", 
		14.5, 16.0, KILOGRAM, 
		JUN, 2024, 
		10.5, 10.5, 24.0, INCH, L_W_H, 
		"Red", 
		FILLED, "LPG",  
		17.5, BAR, 
		125, DEGREE_FARENHEIT, 
		15, YEAR, 
		{"With Attached burner"}, 
		3500
	); 
	
	GasCylinder bharat(
		"Bharat", 
		-10.5, -16.0, KILOGRAM, 
		FEB, 2024, 
		10.5, -10.5, 24.0, INCH, L_W_H, 
		"Red", 
		FILLED, "LPG",  
		-17.5, BAR, 
		12e32, DEGREE_FARENHEIT, 
		-15, YEAR, 
		{"With Attached burner"}, 
		3500
	); 
	
	std::cout << indane; 
	std::cout << bharat; 

	return 0; 
} 