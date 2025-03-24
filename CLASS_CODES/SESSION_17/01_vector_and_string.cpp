/* 
    GOAL : using string -> possible initialization methods, iterator 
    DATE : 01 MARCH 2025 
*/

#include <iostream> 
#include <string> 

using std::cout; 
using std::endl; 
using std::string; 

void string_demo(void); 
void vector_demo(void); 

int main(void) 
{
    string_demo(); 
    // vector_demo(); 

    return (0); 
}

void string_demo(void) 
{
    string s1; 
    string s2("Hello"); 
    string s3(s2); 

    cout << "------ STRING DEMO ENTER --------" << endl; 
    cout << "s1 : " << s1 << endl; // empty 
    cout << "s2 : " << s2 << endl; // hello 
    cout << "s3 : " << s3 << endl; // hello 
    cout << "addr(s2) == " << &s2 << endl; 
    cout << "addr(s3) == " << &s3 << endl; 
    cout << "Contebts of s2 and s3 are same but addresses are not" << endl 
            << "this proves that s3 isa clone of s2" << endl; 

    cout << "Shoq a string char by char : " << endl; 
    cout << "METHOD 1 : Using index " << endl; 

    for(string::size_type i = 0; i != s2.size(); ++i) 
        cout << "s2[" << i << "] = " << s2[i] << endl; 
    cout << "--- METHOD 1 ENDS ---" << endl; 

    cout << "METHOD 2 : Using Iterator" << endl; 
    for(string::iterator iter = s2.begin(); iter != s2.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 
    cout << "--- METHOD 2 ENDS ---" << endl; 
    cout << "------- STRING DEMO LEAVE -------" << endl; 
}

// string -> DYNAMICALLY RESIZABLE CHARACTER ARRAY 

// library implementation 
/* 
namespace std 
{
    class string 
    {
        public: 
            typedef unsigned long long int size_type; 
    }; 
}
*/