#include <stdio.h> 

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
    t1.b = 'a'; 
    t1.c = 3.14f; 

    // NO COMPILE TIME ERROR 
    t1.d = 100; 
    t1.e = 200; 
    t1.e = 300; 
}

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

// Qualified access 
// Test_object.a, Test_object.b, Test_object.c 
// Test_ptr->a, Test_pre->b, Test_ptr->c 

int main(void) 
{
    Test t1; 
    Test t2; 

    // CTE 
    t1.a = 10; 
    t1.b = 'a';
    t1.c = 3.14f; 

    // NO COMPILE TIME ERROR 
    t1.d = 100; 
    t1.e = 200; 
    t1.f = 300; 
}

