#include <stdio.h> 

/*
    As per C standard function cannot be defined inside a structure definition 
*/

struct Date 
{
    int day; /* data definition statment */
    int month; /* data definition statment */
    int year; /* data definition statment */

    // Function definition -> NOT ALLOWED inside 
    // struct (listen to deep explaination in session 09) 
    // CTE (uncommnet the code and see the error )


    int get_day(void) 
    {
        return (day); 
    }
}; 

