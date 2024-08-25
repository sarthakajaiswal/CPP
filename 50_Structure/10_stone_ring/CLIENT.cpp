#include <iostream>
#include <cstring>

#include "stone_ring.hpp" 

int main(void) {
	StoneRing my_ring(
		35000, 
		
		"A245", 
		MALE, 
		
		"Pushkar", 
		22, 
		1.8, 
		"Red",

		"Gold", 
		22, 
		4.3, 
		"Golden", 
		
		"Deoda Jwellers", 
		"Market Line",  
		"Karanja(Lad), washim",
		"Maharashtra", 
		444105, 
		8523697410, 
		"deodajweller@gmail.com", 
		
		"Surya GoldWorks", 
		"MIDC", 
		"Mumbai", 
		"Maharashtra", 
		548693, 
		7893214560, 
		"suryagoldwork@gmail.com", 
		
		10.0, 12.0, 6.8, "cms"
	); 
	
	std::cout << my_ring; 
	
	return 0; 
}