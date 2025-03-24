/* 
    GOAL : dynamic memory allocation demo 
    DATE : 15 MARCH 2025
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
void float_demo(void); 
void date_demo(void); 

int main(void) 
{
    int_demo(); 
    float_demo(); 
    date_demo(); 

    return (0); 
}

void int_demo(void) 
{
    int* p = NULL; // step 1 
    int val; 

    puts("------ int_demo() start ----------\n"); 
    p = (int*)malloc(sizeof(int)); // step 2 
    // step 3  
    if(NULL == p) 
    {
        puts("Error in allocating memory"); 
        exit(-1); 
    }

    // step 4, 5 = R/W (as many times as you want) 
    *p = 10;    // write 
    val = *p;   // read 
    printf("val = %d\n", val); 

    // step 6 
    free(p); 

    // step 7 
    p = NULL; 
    puts("-------- int_demo() leave ----------\n"); 
}

void float_demo(void) 
{
    printf("---------- float_demo() start ---------\n"); 
    float* p = NULL; // step 1 
    float val; 

    p = (float*)malloc(sizeof(float)); // step 2 
    // step 3 
    if(NULL == p) 
    {
        puts("Error in allocating memory"); 
        exit(-1); 
    }

    // step 4, 5 - Read / Write (as many times as you want) 
    *p = 3.14f; // write 
    val = *p;   // read 
    printf("val = %f\n", val); 

    // step 6 
    free(p); 

    // step 7 
    p = NULL; 

    printf("------- float_demo() leave --------\n"); 
}

void date_demo(void) 
{
    struct Date* pDate = NULL;  // step 1 
    int day, month, year; 

    printf("--------- date_demo() start ----------\n"); 

    pDate = (struct Date*)malloc(sizeof(struct Date)); // step 2 
    // step 3 
    if(NULL == pDate) 
    {
        puts("error in allocating memort"); 
        exit(-1); 
    }

    // step 4, 5 - Read/Write as many times as you want 
    pDate->day = 1; // write 
    pDate->month = 1; 
    pDate->year = 1970; 

    day = pDate->day;   // read 
    month = pDate->month; 
    year = pDate->year; 

    printf("%d-%d-%d\n", day, month, year); 

    free(pDate);  // step 6 
    pDate = NULL; // step 7 
    printf("--------- date_demo() leave ----------\n"); 
}
