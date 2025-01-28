#include <iostream> 
#include <vector> 

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T> vec) {
    unsigned int i, size; 

    size = vec.size();
    i=0; 
    while(i<size) {
        os << vec[i]; 
        if(i<size-1)
            os << ", "; 

        i++; 
    } 

    return os; 
}