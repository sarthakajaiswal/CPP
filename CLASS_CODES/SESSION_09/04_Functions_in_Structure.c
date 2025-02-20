/*
    GOAL : To demostrate function definitions are not allowed in structure definition 
    DATE : 20 Feb 2025 
*/

#include <stdio.h> 

/*
    As per C-standard, function cannot be defined inside a structure. 
*/

struct Date 
{
    int day;    // data definition statment : allowed 
    int month;  // data definition statment : allowed 
    int year;   // data definition statment : allowed 

    // function definition statment : NOT allowed 
    // error C2032: 'get_day': function cannot be member of struct 'Date'
    int get_day(); 
    {
        return (day); 
    }
}
