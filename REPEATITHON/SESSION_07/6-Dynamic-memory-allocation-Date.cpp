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

// function declarations 
struct Date* createDateInstance(int _day, int _month, int _year); 
int getDay(struct Date* pDate); 
int getMonth(struct Date* pDate); 
int getYear(struct Date* pDate); 
void setDay(struct Date* pDate, int newDay); 
void setMonth(struct Date* pDate, int newMonth); 
void setYear(struct Date* pDate, int newYear); 
void showDate(struct Date* pDate); 
void releaseDateInstance(struct Date* pDate); 

// main function 
int main(void) 
{
    // client side 
    struct Date* pNewDate = createDateInstance(25, 2, 2025); 
    showDate(pNewDate); 
    setDay(pNewDate, 30); 
    setMonth(pNewDate, 12); 
    setYear(pNewDate, 2026); 
    showDate(pNewDate); 
    printf("%d/%d/%d\n", getDay(pNewDate), getMonth(pNewDate), getYear(pNewDate)); 
    releaseDateInstance(pNewDate); 
    pNewDate = NULL; 

    return (0); 
}

// server side 
struct Date* createDateInstance(int _day, int _month, int _year) 
{
    struct Date* pDate = NULL; 

    pDate = (struct Date*)malloc(sizeof(struct Date)); 
    if(pDate == NULL) 
    {
        printf("Error in allocating memory"); 
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
{
    pDate->day = newDay; 
}

void setMonth(struct Date* pDate, int newMonth) 
{
    pDate->month = newMonth; 
}

void setYear(struct Date* pDate, int newYear) 
{
    pDate->year = newYear; 
}

void showDate(struct Date* pDate) 
{
    printf("%d/%d/%d\n", pDate->day, pDate->month, pDate->year); 
}

void releaseDate(struct Date* pDate) 
{
    free(pDate); 
    pDate = NULL; 
}


// 2 
#include <stdio.h> 
#include <stdlib.h> 

// structure declarations 
struct Date* createDateInstance(int _day, int _month, int _year); 
int getDay(struct Date* pDate); 
int getMonth(struct Date* pDate); 
int getYear(struct Date* pDate); 
void setDay(struct Date* pDate, int newDay); 
void setMonth(struct Date* pDate, int newMonth); 
void setYear(struct Date* pDate, int newYear); 
void showDate(struct Date* pDate); 
void releaseDateInstance(struct Date* pDate); 

// main-function 
int main(void) 
{
    // client side 
    struct Date* pNewDate = createDateInstance(25, 1, 2024); 
    showDate(pNewDate); 
    setDay(pNewDate, 10); 
    setMonth(pNewDate, 12); 
    setYear(pNewDate, 2025); 
    showDate(pNewDate); 
    printf("%d/%d/%d\n", getDay(pNewDate), getMonth(pNewDate), getYear(pNewDate)); 
    releaseDateInstance(pNewDate); 
    pNewDate = NULL; 

    return 0; 
}

// server side 
struct Date* createDateInstance(int _day, int _month, int _year) 
{
    struct Date* pDate = NULL; 

    pDate = (struct Date*)malloc(sizeof(struct Date)); 
    if(pDate == NULL) 
    {
        fprintf(stderr, "malloc() : out of memory"); 
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
{
    pDate->day = newDay; 
}

void setMonth(struct Date* pDate, int newMonth) 
{
    pDate->month = newMonth; 
}

void setYear(struct Date* pDate, int newYear) 
{
    pDate->year = newYear; 
}

void showDate(struct Date* pDate) 
{
    printf("%d/%d/%d\n", getDay(pDate), getMonth(pDate), getYear(pDate)); 
}

void releaseDateInstance(struct Date* pDate) 
{
    free(pDate); 
    pDate = NULL; 
}
