#include <iostream>
#include "perfume.hpp"

int main(void) {
    Perfume my_perfume(
        "Exotica Insense",
        "Ramsons",
        100,
        650,
        3,23,
        2,26,
        "B. R. Sons", "MIDC, Sagaon", "Dombivilli(East)", "Thane", 421203 , "Maharashtra", "India",
        "Ramson Perfumes Pvt. Ltd.", "Phase-1 MIDC", "Domdivili(East)", "Thane", 421203, "Maharashtra", "India", 
        "Customer Care Executive", 9820599044, "info@ramsonperfumes.com", "Phase-1 MIDC", "Dombivli(East)", "Thane", 421203, "Maharashtra", "India"
    );

    my_perfume.set_perfume_contents({"Ethyl Alcohol", "Diethyl Pthlate", "Fragrance", "Benzophenone-3", "BHT", "Aqua", "Permitted Colour", "Alcohol"}),

    std::cout << my_perfume;
}