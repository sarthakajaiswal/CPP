#include <iostream> 
#include "matress.hpp" 

int main(void) {
	Matress my_mat(
		"Sleep Innovations", 
		PLUSH_SUPPORT, 
		KING, 
		"Foam", 
		{"Removable"}, 
		{"Machine Wash"},
		IPX0, 
		"Adults", 
		"Gel Memory Foam", 
		"4-inch Dual Layer Gel Memory Foam Mattress Topper", 
		"G-TOP-05090-KG-WHT", 
		1, 
		"Innocor, Inc.", 
		"", "", "", "", 0, "", "Japan", 
		617014596476, 
		80, 76, 4.0, INCHES, L_W_H, 
		24.2, POUND, 
		"USA", 
		4.4, 5.0, 3.3, THOUSAND,  
		false, 
		false, 
		7999, RUPEES,  
		{"3 inch Gel Menory Foam", "1 inch Fluppy Pillow", "Top cover"} 
	);
	
	std::cout << my_mat << std::endl; 
	
	return 0; 
} 