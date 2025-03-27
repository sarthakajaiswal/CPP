/*
    GOAL : revision code demostrating accessibilty of private and public 
            data member outside class. 
     
    DATE : 08 FEB 2025 
*/

#include <iostream> 

class Test 
{
    private: 
        int a; 
        int b; 
        float c; 
    public: 
        int d; 
        int e; 
        int f; 
}; 

// Qualified class 
// Test_object.a, Test_object.b, Test_object.c 
// Test_ptr->a, Test_ptr->b, Test_ptr->c 

int main(void) 
{
    Test t1; 
    Test t2; 

    // CTE 
    t1.a = 10; 
    t2.b = 'a'; 
    t2.c = 3.14f; 

    // NO COMPILE TIME ERROR 
    t1.d = 100; 
    t1.e = 200; 
    t1.f = 300; 
}
