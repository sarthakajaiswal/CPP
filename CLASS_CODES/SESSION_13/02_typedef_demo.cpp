/*
    GOAL : typedef demo code 
    DATE : 
*/

/* 
    Note : This code won't compile because we have not implemented 
    get_roll_number(), get_sal() and get_addr() 
*/
#include <iostream> 

using std::cout; 
using std::endl; 

int get_roll_number(); 
double get_dal(); 
char* get_addr(); 

// Good practise 
typedef int rollnumber_t; 
typedef double salary_t; 
typedef char* addr_t; 

void test_function(void) 
{
    int x;  // x is a roll number 
    int y;  // y is a salary 
    char* s;    // s is an addres 

    // recommended practise 
    int roll_number; 
    double employee_salary; 
    char* address_of_student; 
}

void test_function(void) 
{
    rollnumber_t get_roll_number(void); 
    salary_t get_salary(void); 
    addr_t get_address(void); 

    rollnumber_t roll_number; 
    salary_t salary; 
    addr_t address_of_student; 

    roll_number = get_roll_number(); 
    salary = get_salary(); 
    address_of_student = get_address(); 
}
