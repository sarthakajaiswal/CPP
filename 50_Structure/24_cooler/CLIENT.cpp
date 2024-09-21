#include <iostream> 
#include "cooler.hpp" 

int main(void) {
	Cooler godrej_cooler(
		"Godrej Max", 
		DESERT_COOLER, 
		GRASS, 
		15, 
		
		"Copper", 
		240, VOLT, 
		120, AMPERE, 
		60, HERTZ, 
		CurrentParameter::AC, 
		1000, 
		
		NO, 
		"Metal", 
		"Aluminium", 
		"Grey", 
		8000, 
		
		18, 18, 42, INCH, L_W_H, 
		
		"SriLakshmi Electronics Pvt. Ltd.", 
		"Mumbai", 789546, "Mumbai", "Maharashtra", 
		
		"SriLakshmi Enterprises", 
		"Mumbai", 789546, "Mumabai", "Maharashtra", 
		"", "customercaresrilakshmienterprise@gmail.com", 
		{8888523641}, 
		
		19.5, KILOGRAM, 
		
		{"Energy Efficient", "Durable", "Wide Area Coverage"}
	); 
	
	std::cout << godrej_cooler << std::endl; 
	
	return 0; 
}