/*
    GOAL : to prove the data members are private by default if the access specifier 
            is not given. 
    DATE : 
*/

class Test 
{
    int a; 
    int b; 
    int c; 
    int d; 
    int e; 
}; 

int main(void) 
{
    Test t; 

    t.a = 10; 
    t.b = 20; 
    t.c = 30; 
    t.d = 40; 
    t.e = 50; 

    return 0; 
}

