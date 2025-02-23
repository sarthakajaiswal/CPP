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

void test_1(void); 

Test g_test_1_saj; 

int main(void) 
{
    test_1(); 

    return (0); 
}

void test_1(void) 
{
    Test t1_saj; 

    g_test_1_saj.a = 100; 
    g_test_1_saj.b = 'A'; 
    g_test_1_saj.c = 3.14f; 

    t1_saj.a = 200; 
    t1_saj.b = 'B'; 
    t1_saj.c = 6.28f; 
}

