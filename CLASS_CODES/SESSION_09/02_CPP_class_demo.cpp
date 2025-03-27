/*
    GOAL : demo class code to study difference between struct and class 
    DATE : 
*/

#include <iostream> 

using std::cout; 

class Test 
{
    int a; 
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
    g_test_1.b = 'A';   // CTE 
    g_test_1.c = 3.14f; // CTE 

    t1.a = 100;         // CTE 
    t1.b = 'B';         // CTE 
    t1.c = 6.28f;       // CTE 
}

