#include <stdio.h> 

/* As per C standard function definition inside structure is not allowed */

struct Date 
{
    int day;    /* data definition statment */ 
    int month;  /* data definition statment */
    int year;   /* data definition statment */

    // Function definition statment -> NOT ALLOWED inside structure 
    int get_day() // ERROR  
    {
        return (day); 
    }
}; 

#include <stdio.h> 

/* As per C Standard function cannot be defined inside structure */

struct Date 
{
    int day;    /* data definition statment */
    int month;  /* data definition statment */
    int year;   /* data definition statment */

    // function definition statment -> NOT allowed inside structure 
    int getDay() 
    {
        return (day); 
    }
}; 
