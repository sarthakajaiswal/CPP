/* 
    GOAL : to implement few of the features in class string at server side 
    DATE : 
*/

#include <cstdio> 
#include <cstdlib> 
#include <cassert> 
#include <cstring> 
#include <iostream>

using std::cout; 
using std::endl; 

namespace cpa 
{
    class string 
    {
        private: 
            char* p_str; 
            int N; 
        public: 
            string() : p_str(0), N(0) {

            }

            string(char* s) 
            {
                int L = strlen(s); 
                p_str = (char*)malloc(L + 1);  
                assert(p_str); 
                strncpy(p_str, s, L+1); 
                N = L; 
            }

            // copy constructor 
            string(string& rhs_string) 
            {
                N = rhs_string.N; 
                p_str = (char*)malloc(N + 1); 
                strncpy(p_str, rhs_string.p_str, N+1); 
            } 

            friend std::ostream& operator<<(std::ostream& os, string& s) 
            {
                if(s.p_str) 
                    printf("%s", s.p_str); 
                return os; 
            }

            ~string() 
            {
                if(p_str) 
                {
                    cout << "Memory to string is freed" << endl; 
                    free(p_str); 
                    p_str = 0; 
                }
            }
    }; 
} 

int main(void) 
{
    cpa::string s1; 
    cpa::string s2("Hello"); 
    cpa::string s3(s2); 

    cout << "s1 : " << s1 << endl; 
    cout << "s2 : " << s2 << endl; 
    cout << "s3 : " << s3 << endl; 
    cout << "addr(s2) : " << &s2 << endl; 
    cout << "addr(s3) : " << &s3 << endl; 

    return 0; 
} 
