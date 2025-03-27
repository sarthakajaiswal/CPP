/*
    GOAL : to study the public and private members 
    DATE : 
*/

#include <iostream> 

using std::cout; 

class Test 
{
    private: 
        int a; 
    public: 
        char b; 
        float c; 
}; 

Test g_test_1; 
void test_1(void); 

int main(void) 
{
    test_1(); 
    return 0; 
}

void test_1(void) 
{
    Test t1; 

    g_test_1.a = 100;   // CTE - compile time error 
    g_test_1.b = 'A'; 
    g_test_1.c = 3.14f; 

    t1.a = 200;     // CTE 
    t1.b = 'B'; 
    t1.c = 6.28f; 
}
