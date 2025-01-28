#include <iostream>
#include <cstdio>

#include "carrom.hpp"

int main(void) {
    Carrom carrom = Carrom();
    float price;

    carrom.show("Carrom Information");

    price = carrom.get_price();
    std::cout << "Price: " << price << std::endl;

    carrom.show_dimention("After show_dimention");

    carrom.set_dimention(80, 8);
    carrom.set_pocket_diameter(3.75);
    carrom.set_weight(24.0);
    carrom.set_price(5);
    carrom.set_rip_width(12.0);

    carrom.show("Carrom Information");

    return 0;
}