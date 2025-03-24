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
    vector_demo(); 

    return 0; 
}

void string_demo(void) 
{
    string s1; 
    string s2("Hello"); 
    string s3(s2); 

    cout << "--- STRING DEMO ENTER ---" << endl; 
    cout << "s1 : " << s1 << endl; // empty 
    cout << "s2 : " << s2 << endl; // hello 
    cout << "s3 : " << s3 << endl; // hello 
    cout << "addr(s2) : " << &s2 << endl; 
    cout << "addr(s3) : " << &s3 << endl; 
    cout << "Contents of string s2 and s3 are same but the addresses are different" << endl 
            << "This proves s3 is a clone of s2" << endl; 

    cout << "Show a string char by char : " << endl; 
    cout << "METHOD 1: Using index" << endl; 

    for(string::size_type i = 0; i != s2.size(); ++i) 
        cout << "s2[" << i << "] = " << s2[i] << endl; 
    cout << "---- METHOD 1 ENDS ----" << endl; 

    cout << "STRING DEMO LEAVE" << endl; 
}

// string - dynamically resizable character array
// src->exe = static time 
// exe start-> exe end = run/dynamic time 

void vector_demo(void) {} 
 
// library implementstion 
/*
    Inside header file string 

    namespace std 
    {
        class string 
        {
            public: 
                typedef unsigned long long int size_type; 
        }; 
    }

    ----- 

    CLIENT 

    #include <string> 

    using std::string;
     
    int main(void) 
    {
        for(string::size_type i; ) 
    }

    // without -> usingstd::string; 

    #include <string>

    int main(void) 
    {
        for(std::string::size_type i)
    }
*/