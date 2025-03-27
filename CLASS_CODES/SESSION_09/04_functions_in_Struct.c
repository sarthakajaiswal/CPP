/*
    GOAL : to show functions are not allowed in structure definition 
    DATE : 
*/


#include <stdio.h> 

/*
    As per C-standard function cannot be defined inside a structure 
*/

struct Date 
{
    int day;    /* data definition statment */
    int month;  /* data definition statment */
    int year;   /* data definition statment */

    // Function definition -> NOT ALLOWED inside structure 
    int get_day()   // error 
    {
        return (day); 
    }
}; 

