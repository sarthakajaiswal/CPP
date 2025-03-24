/*
    GOAL : destructor demo  
    DATE : 23 MARCH 2025 
*/

#include <iostream> 
#include <cstring> 

class A 
{
    private: 
        double d; 
        int* i_ptr; 

    public: 
        A(double _d, int _n) 
        {
            std::cout << "--------- Enter A::A() -----------" << std::endl; 
            this->d = _d; 
            this->i_ptr = new int; 
            *this->i_ptr = _n; 
            std::cout << "--------- LEAVE A::A() ------------" << std::endl; 
        }

        ~A() 
        {
            std::cout << "--------- ENTER A::~A() -----------" << std::endl; 
            std::cout << "Applying delete operator on this->i_ptr" << std::endl; 
            delete this->i_ptr; 
            this->i_ptr = 0; 
            std::cout << "--------- LEAVE A::~A() -----------" << std::endl; 
        }

        void show() 
        {
            std::cout << "--------- Enter A::show() ------------" << std::endl; 
            std::cout << "Double val : " << this->d << ", " 
                        << "Int val: " << *this->i_ptr << std::endl; 
            std::cout << "--------- LEAVING A::show() -------" << std::endl; 
        }
}; 

class B 
{
    private: 
        float f_arr[4]; // 16 
        A* A_ptr; // 8 bytes
        int i_arr[4]; // 16 bytes

    public: 
        B() 
        {
            std::cout << "----- Enter B::B() --------" << std::endl; 
            memset((void*)f_arr, 0, 4 * sizeof(float)); 
            memset((void*)i_arr, 0, 4 * sizeof(int)); 
            A_ptr = new A(45.65, 100); 
            std::cout << "--------- Leaving B::B() --------" << std::endl; 
        }

        void show() 
        {
            std::cout << "----- ENTER B::show() --------" << std::endl; 

            std::cout << "showing f_arr: " << std::endl; 
            for(int i = 0; i < 4; ++i) 
                std::cout << "f_arr[" << i << "] = " << this->f_arr[i] << std::endl; 

            std::cout << "showing i_arr : " << std::endl; 
            for(int i = 0; i < 4; ++i) 
                std::cout << "i_arr[" << i << "] = " << this->i_arr[i] << std::endl; 

            std::cout << "Showing A_ptr : " << std::endl; 
            this->A_ptr->show(); 
            std::cout << "------------ LEAVE B::show() ----------" << std::endl; 
        }

        ~B() 
        {
            std::cout << "-------- Enter B::~B() ----------" << std::endl; 
            std::cout << "Applying delete operator on this->A_ptr" << std::endl; 
            delete this->A_ptr; // trigger call to A::~A()  
            this->A_ptr = 0; 
            std::cout << "----- LEAVING B::~B() -------" << std::endl; 
        }
}; 

int main(void) 
{
    std::cout << "------- main(): B* pB = new B ---------" << std::endl; 
    B* pB = new B; 
    
    std::cout << "-------- main()pB->show() ------------" << std::endl; 
    pB->show(); 

    std::cout << "-------- main(): delete pB; -----------" << std::endl; 
    delete pB; 
    pB = 0; 

    return 0; 
}
