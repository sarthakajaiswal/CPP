#include <iostream>
#include "handwatch.hpp"

int main(void) {
	Handwatch my_watch(
		"Titan",
		"A55", 
		ANALOG,
		{"Light Weight", "Stylish"},
		NO,
		"Golden" ,
		"Stainless Steel",
		350,
		2,
		{"Young Men", "Senior Citizens"}, 
		"",
		3,3,2,INCH,
		"India", 
		1500
	);
	
	std::cout << my_watch << std::endl;

	return 0;
}