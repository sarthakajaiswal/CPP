#include <stdio.h> 

struct Test 
{
    int a;
    char b; 
    float c; 
}; 

void test_1(void); 
struct Test g_test_1_saj; 

int main(void) 
{
    test_1(); 
    printf("g_test_1.a = %d, g_test_1.b = %c, g_test_1.c =%f\n", 
                g_test_1_saj.a, g_test_1_saj.b, g_test_1_saj.c); 

    return (0); 
}

void test_1(void) 
{
    struct Test t1_saj; 

    g_test_1_saj.a = 10; 
    g_test_1_saj.b = 'A'; 
    g_test_1_saj.c = 3.14; 

    t1_saj.a = 20; 
    t1_saj.b = 'B'; 
    t1_saj.c = 6.38; 

    printf("t1_sud.a = %d, t1_saj.b = %c, t1_saj.c = %f\n", 
                t1_saj.a, t1_saj.b, t1_saj.c); 
}

