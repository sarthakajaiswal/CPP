#include <iostream> 
#include <vector> 

#include "element.hpp" 

int main(void) {
	Element oxygen(
		"Oxygen", 
		"O", 
		8, 
		16.0, 
		"[He]2s^2 2p^4", 
		3.44, 
		GAS, 
		NON_METAL, 
		{16, 17, 18}, 
		{12, 13, 14, 15, 19, 20, 21, 22, 24, 25, 26, 27, 28}, 
		{-2}, 
		P, 2, 16, 
		54.36, 90.20, KELVIN, 
		67, PICOMETER, 
		13.6984, ELECTRON_VOLT, 
		461, GRAM_PER_KILOGRAM, 
		857, GRAM_PER_LITER,
		0.001429, GRAM_PER_CUBIC_CENTIMETER, 
		15.9994, DALTON, 
		1774
	); 

	std::cout << oxygen; 

	return 0; 
}