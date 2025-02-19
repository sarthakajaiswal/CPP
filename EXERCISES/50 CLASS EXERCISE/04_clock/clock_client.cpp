#include <iostream>
#include <cstdio>

#include "clock.hpp"

int main(void) {
	Clock my_clock;
	
	my_clock.show();
	
	my_clock.set_brand("ajanta");
	my_clock.set_colour("Red");
	my_clock.set_display_type("Analog");
	my_clock.set_power_source("Battery");
	my_clock.set_shape("Round");
	my_clock.set_weight_kgs(0.90);
	my_clock.set_model_number(2147);
	my_clock.set_movement_type("Quartz");
	my_clock.set_material("Plastic");
	my_clock.set_country_origin("India");
	my_clock.set_price(255);
	
	std::cout << "brand: " << my_clock.get_brand() << std::endl;
	std::cout << "Colour : " << my_clock.get_colour() << std::endl;
	std::cout << "Display type: " << my_clock.get_display_type() << std::endl;
	std::cout << "Power source : " << my_clock.get_power_source() << std::endl;
	std::cout << "Shape : " << my_clock.get_shape() << std::endl;
	std::cout << "weight : " << my_clock.get_weight_kgs() << " kgs" << std::endl;
	std::cout << "Model Number : " << my_clock.get_model_number() << std::endl;
	std::cout << "Movement type : " << my_clock.get_movement_type() << std::endl;
	std::cout << "Material : " << my_clock.get_material() << std::endl;
	std::cout << "Origin Country : " << my_clock.get_country_origin() << std::endl;
	std::cout << "Price : " << my_clock.get_price() << " Rs" << std::endl;

	my_clock.show();

	return 0;
}