/* 
    GOAL : revision code how variable are initialized in C 
    DATE : 09 FEB 2025 
*/ 
#include <stdio.h> 

struct Date 
{
    int day; 
    int month; 
    int year; 
}; 

int main(void) 
{
    int num = 10; 
    printf("num=%d\n", num); // num will be printed 

    struct Date myDate = {9, 2, 2025}; 
    printf("%d/%d/%d\n", myDate.day, myDate.month, myDate.year); 
    // 9, 2, 2025 

    return 0; 
}

