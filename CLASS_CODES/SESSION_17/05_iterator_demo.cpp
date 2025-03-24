/*
    GOAL : acessing characters of string using iterator 
    DATE : 01 March 2025
*/

#include <iostream> 
#include <string> 

using std::cout; 
using std::endl; 
using std::string; 

int main(void) 
{
    string s2("ABCDE"); 
    string::iterator iter = s2.begin(); 

    cout << "*iter = " << *iter << endl; // *iter = 'A' 

    ++iter; // advance internal current pointer to next character (method_1) 
    cout << "*iter = " << *iter << endl; // *iter = 'B' 

    iter++; // advance internal current pointer to next character (method 2) 
    cout << "*iter = " << *iter << endl; // *iter = 'c'; 

    iter = iter + 1; // advance internal current pointer to next character (method 3) 
    cout << "*iter = " << *iter << endl; // *iter = 'D'; 

    iter = s2.begin(); 
    while(iter != s2.end()) 
    {
        cout << "*iter = " << *iter << endl; 
        ++iter; 
    } 

    return 0; 
}

