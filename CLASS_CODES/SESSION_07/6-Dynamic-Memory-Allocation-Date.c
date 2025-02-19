// header file inclusion 
#include <stdio.h> 
#include <stdlib.h> 

// structure definition 
struct Date 
{
    int day; 
    int month; 
    int year; 
}; 

// function declaration 
struct Date* createDateInstance(int _day, int _month, int _year); 
int getDay(struct Date* pDate); 
int getMonth(struct Date* pDate); 
int getYear(struct Date* pDate); 
void setDay(struct Date* pDate, int newDay); 
void setMonth(struct Date* pDate, int newMonth); 
void setYear(struct Date* pDate, int newYear); 
void showDate(struct Dte* pDate); 
void releaseDateInstance(struct Date* pDate); 

// main function 
int main(void) 
{
    return (0); 
}

struct Date* createDateInstance(int _day, int _month, int _year) 
{
    struct Date* pDate = NULL; 

    pDate = (struct Date*)malloc(sizeof(struct Date)); 
    if(NULL == pDate) 
    {
        fprintf(stderr, "malloc() : fatal: out of memory"); 
        exit(-1); 
    }

    pDate->day = _day; 
    pDate->month = _month; 
    pDate->year = _year; 

    return (pDate); 
} 

int getDay(struct Date* pDate) 
{
    return (pDate->day); 
} 

int getMonth(struct Date* pDate) 
{
    return (pDate->month); 
} 

int getYear(struct Date* pDate) 
{
    return (pDate->year); 
} 

void setDay(struct Date* pDate, int newDay) 
{} 

void setMonth(struct Date* pDate, int newMonth) 
{} 

void setYear(struct Date* pDate, int newYear) 
{} 

void showDate(struct Dte* pDate) 
{} 

void releaseDateInstance(struct Date* pDate) 
{} 


