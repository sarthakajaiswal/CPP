/* 
    GOAL : to understand need of delete operator 
    DATE : 22 MARCH 2025 
*/

#include <iostream> 

class A 
{
    private: 
        double d; 
        int * i_ptr; 

    public: 
        // fix of error at site 2 (part 2) 
        // fix of error at site 3 (part 1) 
        A(double _d, int _i)  
        {
            this->d = _d;  // fix of error site 2 (part 3) 
            this->i_ptr = new int;  // fix at error site 1 
            *this->i_ptr = _i; // fix of error at site 3 (part 3) 
        }

        // fix of error at site 4 
        void show() 
        {
            std::cout << "double val : " << this->d << ", int val = " << *this->i_ptr << std::endl; 
        }

        // fix of error at site 5 (part 1) 
        void free_internal_ptrs() 
        {
            delete this->i_ptr; 
            this->i_ptr = 0; 
        }
}; 

int main(void) 
{
    A* A_ptr = 0; 

    // fix of error at site 2 (part 2) 
    // fix of error at site 3 (part 3) 
    A_ptr = new A(45.54, 100); 
    // A_ptr->i_ptr = new int; // error site 1 

    // A_ptr->d = 45.65; // error site 2  
    // *A_ptr->i_ptr = 100;  // error site 3 

    // error site 4 
    // std::cout << "double val : " << A_ptr->d << ", int val : " << *A_ptr->i_ptr << std::endl; 

    // fix of error at site 4 (part 2) 
    A_ptr->show(); 

    // delete A_ptr->i_ptr;  // error site 5 

    // fix of error at site 5 (part 2) 
    A_ptr->free_internal_ptrs(); 
    
    delete A_ptr; 
    A_ptr = 0; 

    return 0; 
}

