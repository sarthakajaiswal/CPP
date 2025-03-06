#include <iostream> 
#include <string> 
#include <vector>  

using std::endl;    // endl is defined in std namespace 
using std::cout;    // object of class ostream | ostream and cout are in std namespace 
using std::string;  // string is a class defined in std namespace (header -> string) 
using std::vector;  // vector is a class template defined in std namespace (header -> vector) 

class Date 
{
    private: 
        int day, month, year; 
    public: 
        Date(int init_day, int init_month, int init_year) 
        {
            day = init_day; 
            month = init_month; 
            year = init_year; 
        }

        void show() 
        {
            cout << day << "/" << month << "/" << year << endl; 
        }
}; 

void vector_demo(void); 

int main(void) 
{
    vector_demo(); 
    return 0; 
}

void vector_demo(void) 
{
    // vector of integers 
    vector<int> ivec1; 
    vector<int> ivec2{10, 20, 30, 40, 50}; 
    vector<int> ivec3(ivec2); 
    vector<int> ivec4(5); 
    vector<int> ivec5(5, 100); 
} 

