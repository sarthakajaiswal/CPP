#include <iostream> 
#include <cstring> 
#include <vector> 

#include "movie.hpp" 

int main(void) {
    Movie matrix(
        "Matrix", 
        {"The Wachowskis"}, 
        {"Joel Silver"}, 
        {"Warner Bros."}, 
        {"United states", "Australia"}, 
        {"Sci-fi", "Action"}, 
        24, MARCH, 1999, 
        136, MINUTES, 
        63, MILLION, 467.6, MILLION, DOLLAR, 
        8.7, 10.0, 2.1, MILLION
    ); 

    std::cout << matrix << std::endl;

    return 0; 
}