#include <iostream> 
#include "pen_drive.hpp"  

int main(void) {
	PenDrive my_drive(
		"SanDisk", 
		16, GB, 
		"Silver", 
		"Plastic", 
		
		12, MBPS, "USB", "v22gb16", 
		"Pen Drive", 
		
		"Toshiba Electronics", 
		"lane 1", "Area C12 MIDC", "Chennai", 
		586149, 
		"Chennai", "Telangana", "India", 
		
		6, 2.2, 1.3, CENTIMETER, L_W_H, 
		
		{"Light Weight"}, 
		1, NO, NO, 
		{"Windows", "Linux", "Mac"}, 
		{"USB 2.0"}, 
		
		"India", 
		6, GRAM, 
		4.0, 5.0, 54896, 
		{{1, "Pen Drives"}}, 
		
		12, OCT, 2020, 
		
		"Sanjay Electronics And Electricals", 
		"Shop No 12", "Mahajan Complex, Main Line", "Amravati", 
		442233, "Amravati", "Maharashtra", "India", 
		
		"Sanjay Electronics And Electricals", 
		"Shop No 12", "Mahajan Complex, Main Line", "Amravati", 
		442233, "Amravati", "Maharashtra"
	); 
	
	std::cout << my_drive; 
	
	return 0; 
} 