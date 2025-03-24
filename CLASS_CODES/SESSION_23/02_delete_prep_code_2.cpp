/* 
    GOAL : Preparation code for delete operator in CPP 
    DATE : 22 MARCH 2025 
*/

#include <iostream> 

class A 
{
    public: 
        double d; 
        int* i_ptr; 
}; 

int main(void) 
{
    A* A_ptr = 0; 

    A_ptr = new A; 
    A_ptr->i_ptr = new int; 

    A_ptr->d = 45.65; 
    *A_ptr->i_ptr = 100; 

    std::cout << "Double val : " << A_ptr->d << ", int val : " << *A_ptr->i_ptr << std::endl; 

    delete A_ptr->i_ptr; 
    delete A_ptr; 
    A_ptr = 0;  

    return 0; 
}
