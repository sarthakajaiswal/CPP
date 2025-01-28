#include <iostream> 
#include "mouse.hpp" 

int main(void) {
	Mouse new_mouse(
		"Dell", 
		1500, 
		{"USB cable", "Plug And Play"}, 
		OPTICAL, 
		"Black", 
		{"Laptop", "Desktop"}, 
		{"Windows", "Linux"}, 
		OFFICE, 
		
		10.0, 7.0, 7.0, CM, L_W_H, 
		70, GM, 
		80, CM, 
		3, 
		DC, 5, V, 2.0, 
		1, AMPERE, 100, AMPERE, 
		10, 60, DEGREE_CELCIUS,
		5, 60, 
		10, 60, DEGREE_CELCIUS, 
		5, 60, 
		120, 
		"2 Million Clicks", 
		{"Mouse", "User Manual"}, 
		
		"Dell Technologies Pvt. Ltd.", 
		"", "India",
		"www.delltechnologies.com", 
		"customercaredell@gmail.com", 
		{18001212}
	); 

	std::cout << new_mouse; 

	return 0; 
}