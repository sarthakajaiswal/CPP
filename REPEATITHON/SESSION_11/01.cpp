#include <iostream> 

class Test 
{
    private: 
        int a; 
        char b; 
        float c; 

    public: 
        int d; 
        int e; 
        int f; 
}; 

int main(void) 
{
    Test t1; 
    Test t2; 

    t1.a = 10; 
    t1.b = 'a'; 
    t1.c = 3.14f; 

    printf("t1.a = %d, t1.b = %c, t1.c = %f\n", t1.a, t1.b, t1.c); 

    /* 
    t2.d = 100; 
    t2.e = 200; 
    t2.f = 300; 
    */

    return 0; 
}
