#include <stdio.h> 

/* 
    as per C standard functions are not allowed inside structure definition
*/

struct Date 
{
    int day;    /* data definition statment */
    int month;  /* data definition statment */  
    int year;   /* data definition statment */

    // Function definition -> NOT ALLOWED 
    // struct (listen to deep explaination in session 9)
    // CTE (uncomment entire function to see the error)

    int get_day(void) 
    {
        return (day);   
    }
}; 

