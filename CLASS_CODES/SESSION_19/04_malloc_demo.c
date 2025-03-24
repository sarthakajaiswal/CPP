/*
    GOAL : Demonstate Using malloc in 7 steps 
    DATE : 08 MARCH 2025
*/

#include <stdio.h> 
#include <stdlib.h> 

struct Date 
{
    int day; 
    int month; 
    int year; 
}; 

void int_demo(void); 

int main(void) 
{
    int_demo(); 
    return (0); 
}

void int_demo(void) 
{
    int* p = NULL; 

    p = (int*)malloc(sizeof(int)); 
    if(NULL == p) 
    {
        puts("Error in allocating memory"); 
        exit(-1); 
    }

    *p = 100; 
    printf("*p = %d\ns", *p); 

    free(p); 
    p = NULL; 
} 

