/* 
    GOAL : Demostrating delete operator and destructor 
    DATE : 22 MARCH 2025 
*/

#include <iostream> 

// SERVER 
class A 
{
    private: 
        double d; 
        int* i_ptr; 

    public: 
        A(double _d, int _n) 
        {
            this->d = _d; 
            this->i_ptr = new int; 
            *this->i_ptr = _n; 
        }

        ~A() 
        {
            delete i_ptr; 
            i_ptr = 0; 
        }

        void show() 
        {
            std::cout << "double val = " << this->d 
                        << ", int val = " << *this->i_ptr << std::endl;  
        }
}; 

//////////////////// 
int main(void) 
{
    A* A_ptr = 0; 

    A_ptr = new A(45.65, 100); 
    A_ptr->show(); 
    delete A_ptr;   // First call : A::~A(A_ptr) and then dynamically 
                    // aloocated object of A is freed  
    A_ptr = 0; 

    return 0; 
}

