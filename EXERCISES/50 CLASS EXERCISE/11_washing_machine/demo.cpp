#include <iostream>
#include <cstring>
#include <vector> 

class A{
    private: 
    int a; 
    char b; 
    public: 
        A(int a_, char b_) : a(a_), b(b_) {}
}; 

int main(void){
    std::vector<int,char> vec = {(1, 'a'), (2,'b')};

    std::cout << vec[0];

    return 0;     
}


