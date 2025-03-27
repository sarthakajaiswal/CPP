#include <stdio.h> 

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

    g_test_1.a = 100; 
    g_test_1.b = 'A'; 
    g_test_1.c = 3.14; 

    t1.a = 200;     // CTE 
    t1.b = 'B';     // CTE 
    t1.c = 6.28f; // CTE 
} 

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

    g_test_1.a = 100; 
    g_test_1.b = 'A'; 
    g_test_1.c = 3.14f; 

    t1.a = 200; 
    t1.b = 'B'; 
    t1.c = 6.28f; 
}

