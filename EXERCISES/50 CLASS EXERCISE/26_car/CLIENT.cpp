#include <iostream> 
#include <cstring> 

#include "car.hpp" 

int main(void) {
	Car ertiga(
		"Ertiga", "VDI", "Maruti Suzuki", 
		DIESEL, 
		1498,
		"1.5 L DDIS", 
		7, "km/litre", 
		{"Solid White", "Silky Silver", "Magma Grey"}, 
		95, PS, 4000, 
		225, NEWTON_METER, 1500, 2500, 
		5, MANUAL, 
		"Common Rail Diesel Injection", 
		4395, 1735, 1685, MILIMETER, 
		2750, MILIMETER, 
		185, MILIMETER, 
		DISC, DRUM, 
		"MacPherson Strut With Coil Spring", 
		"Torson Beam With Coil Spray", 
		185.0, 65.0, RADIAL, 15.2, 
		54, METER, 
		7, 1200000
	); 
	
	std::cout << ertiga; 
	
	return EXIT_SUCCESS; 
} 