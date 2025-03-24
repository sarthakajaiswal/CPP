/* 
    GOAL :  Preparation code to learn delete operator 
    DATE :  22 MARCH 2025 
*/

#include <stdio.h> 
#include <stdlib.h> 

struct A 
{
    double d; 
    int* i_ptr; 
}; 

int main(void) 
{
    struct A* A_ptr = NULL;     // s1 

    A_ptr = (struct A*)malloc(sizeof(struct A)); //2 
    // 3 
    if(A_ptr == NULL) 
    {
        puts("Error in allocating memory"); 
        exit(-1); 
    }

    // 4 
    A_ptr->d = 45.65; 

    A_ptr->i_ptr = (int*)malloc(sizeof(int)); 
    if(NULL == A_ptr->i_ptr) 
    {
        puts("Error in allocating memory"); 
        exit(-1); 
    }
    *A_ptr->i_ptr = 100; 

    // 5 
    printf("Double val = %lf, integer val = %d\n", A_ptr->d, *A_ptr->i_ptr); 

    return (0); 
}

