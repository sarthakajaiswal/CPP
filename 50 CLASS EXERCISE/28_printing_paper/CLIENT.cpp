#include <iostream> 
#include "printing_paper.hpp" 

int main(void) {
    PrintingPaper jk_copier(
        "JK", 
        "White", 
        2.31, KILOGRAM, 
        "Smooth", 500, 
        12, NANOMETER, A4, 
        "Copy and Multipurpose Paper", 
        {"Premium multipurpose office paper", "High Brightness", 
            "100% ECF"}, 
        29.0, 22.0, 8.4, CENTIMETER, 
        "JK Paper Mills", "", "", "Jaykaypur", "Rayadada", 
            765017, "Odisha", "India", {}, "", "", 
        4.2, 5.0, 16668, 
        {{2, "Office Product"}, {1, "Copy and Multipurpose Paper"}}, 
        312
    ); 

    std::cout << jk_copier << std::endl; 

    return 0; 
}