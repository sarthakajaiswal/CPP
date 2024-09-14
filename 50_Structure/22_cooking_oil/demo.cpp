#include <iostream> 
#include <vector> 
#include "vector_template.hpp"

int main(void) {
    std::vector<int> vec = {}; 
    std::vector<int> vec2;

    if(vec == vec2)
        std::cout << "true";  

    std::cout << vec; 

    return 0; 
}