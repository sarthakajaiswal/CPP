/* 
    GOAL : Get hands-on of using iterators and loops on vector 
    DATE : 08 MARCH 2025 
*/

#include <iostream> 
#include <string> 
#include <vector> 

using std::cout;    // object of class ostream | ostream and cout are defined in namespace std 
using std::endl;    // endl defined in std namespace 
using std::string;  // string is a class defined int std namespace 
using std::vector;  // vector is a 'class template' defined in std namespace 

class Date 
{
    private: 
        int day, month, year; 
    public: 
        Date() {} 
        Date(int init_day, int init_month, int init_year) 
        {
            day = init_day; 
            month = init_month; 
            year = init_year; 
        }

        void show() 
        {
            cout << day << '/' << month << "/" << year << endl; 
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
    // vector of ints 
    vector<int> ivec1; 
    vector<int> ivec2{10, 20, 30, 40, 50}; 
    vector<int> ivec3(ivec2); 
    vector<int> ivec4(5); 
    vector<int> ivec5(5, 100); 

    // transverse through all vectors 
    // method 1 : using index 
    for(vector<int>::size_type i = 0; i != ivec1.size(); ++i) 
        cout << "ivec[" << i << "] : " << ivec1[i] << endl;  

    // method 2 : using iterator 
    for(vector<int>::iterator iter = ivec1.begin(); iter != ivec1.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // ivec2 : method 1 : using index 
    for(vector<int>::size_type i = 0; i < ivec2.size(); ++i) 
        cout << "ivec2[" << i << "] = " << ivec2[i] << endl; 

    // ivec2 : method 2 : using iterator 
    for(vector<int>::iterator iter = ivec2.begin(); iter != ivec2.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // ivec3 : method 1 : using index 
    for(vector<int>::size_type i = 0; i != ivec3.size(); ++i) 
        cout << "ivec3[" << i << "] = " << ivec3[i] << endl; 

    // ivec3 : method 2 : using iterator 
    for(vector<int>::iterator iter = ivec3.begin(); iter != ivec3.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // ivec4 : method 1: using index 
    for(vector<int>::size_type i = 0; i != ivec4.size(); ++i) 
        cout << "ivec4[" << i << "] = " << ivec4[i] << endl; 

    // ivec4: method 2 : using iterator 
    for(vector<int>::iterator iter = ivec4.begin(); iter != ivec4.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // ivec5 : using index  
    for(vector<int>::size_type i = 0; i != ivec5.size(); ++i) 
        cout << "ivec5[" << i << "] = " << ivec5[i] << endl; 
    // ivec5 : using iterator 
    for(vector<int>::iterator iter = ivec5.begin(); iter != ivec5.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // vector of floats 
    vector<float> f_vec1; // empty 
    vector<float> f_vec2{1.1f, 2.2f, 3.3f, 4.4f}; 
    vector<float> f_vec3(f_vec2); // clone of f_vec2 
    vector<float> f_vec4(8);    // vector of floats with preallocation of 8 floats 
                                // those 8 floats are ideally be 0.0f but 
                                // cannot be guarenteed on all implementations 
    vector<float> f_vec5(8, 1.1f); // vector of floats with pre-allocation for 8 floats 
                                    // each of them initialized to 1.1f (guarenteed) 
    
    cout << "f_vec1 : method index" << endl; 
    for(vector<float>::size_type i = 0; i != f_vec1.size(); ++i) 
        cout << "f_vec1[" << i << "] = " << f_vec1[i] << endl; 
    
    cout << "f_vec1 : iterator method " << endl; 
    for(vector<float>::iterator iter = f_vec1.begin(); iter != f_vec1.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    cout << "fvec2: index method " << endl; 
    for(vector<float>::size_type i = 0; i != f_vec2.size(); ++i) 
        cout << "fvec2[" << i << "] = " << f_vec2[i] << endl; 
    
    cout << "f_vec2 : iterator method" << endl; 
    for(vector<float>::iterator iter = f_vec2.begin(); iter != f_vec2.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    cout << "fvec3: index method" << endl; 
    for(vector<float>::size_type i = 0; i != f_vec3.size(); ++i) 
        cout << "f_vec3[" << i << "] = " << f_vec3[i] << endl; 

    cout << "f_vec3 : iterator method " << endl; 
    for(vector<float>::iterator iter = f_vec3.begin(); iter != f_vec3.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    cout << "fvec4 : index method" << endl; 
    for(vector<float>::size_type i = 0; i != f_vec4.size(); ++i) 
        cout << "f_vec4[" << i << "] = " << f_vec4[i] << endl; 

    cout << "f_vec4 : iterator method" << endl; 
    for(vector<float>::iterator iter = f_vec4.begin(); iter != f_vec4.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    cout << "fvec5 : index method" << endl; 
    for(vector<float>::size_type i = 0; i != f_vec5.size(); ++i) 
        cout << "f_vec5[" << i << "] = " << f_vec5[i] << endl; 

    cout << "f_vec5 : iterator method" << endl; 
    for(vector<float>::iterator iter = f_vec5.begin(); iter != f_vec5.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // vector of strings 
    vector<string> str_vec1;   // empty 
    vector<string> str_vec2{
                        string("Hello"), 
                        string("World!"), 
                        string("iterator"), 
                        string("Amazing!") 
                    }; 
    vector<string> str_vec3(str_vec2); 
    vector<string> str_vec4(5); 
    vector<string> str_vec5(5, string("YOGESHWAR SIR")); 

    // str_vec1 
    cout << "str_vec1 : using index" << endl; 
    for(vector<string>::size_type i = 0; i != str_vec1.size(); ++i) 
        cout << "str_vec1[" << i << "] = " << str_vec1[i] << endl; 

    cout << "str_vec1 : using iterator" << endl; 
    for(vector<string>::iterator iter = str_vec1.begin(); iter != str_vec1.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // str+vec2 
    cout << "str_vec2 : using index " << endl; 
    for(vector<string>::size_type i = 0; i != str_vec2.size(); ++i) 
        cout << "str_vec2[" << i << "] = " << str_vec2[i] << endl; 

    cout << "str_vec2 : using iterator" << endl; 
    for(vector<string>::iterator iter = str_vec2.begin(); iter != str_vec2.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // str_vec3
    cout << "str_vec3 : using index" << endl; 
    for(vector<string>::size_type i = 0; i != str_vec3.size(); ++i) 
        cout << "str_vec3[" << i << "] = " << str_vec3[i] << endl; 

    cout << "str_vec3 : using iterator " << endl; 
    for(vector<string>::iterator iter = str_vec3.begin(); iter != str_vec3.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // str_vec4 
    cout << "str_vec4 : using index" << endl; 
    for(vector<string>::size_type i = 0; i != str_vec4.size(); ++i) 
        cout << "str_vec4[" << i << "] = " << str_vec4[i] << endl; 

    cout << "str_vec4 : using iterator " << endl; 
    for(vector<string>::iterator iter = str_vec4.begin(); iter != str_vec4.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // str_vec5 
    cout << "str_vec5 using index " << endl; 
    for(vector<string>::size_type i = 0; i != str_vec5.size(); ++i) 
        cout << "str_vec5[" << i << "] = " << str_vec5[i] << endl; 

    cout << "str_vec5 : using iterator" << endl; 
    for(vector<string>::iterator iter = str_vec5.begin(); iter != str_vec5.end(); ++iter) 
        cout << "*iter = " << *iter << endl; 

    // vectors of dates 
    vector<Date> date_vec1; 
    vector<Date> date_vec2{
                    Date(8, 3, 2025), 
                    Date(9, 3, 2025), 
                    Date(15, 3, 2025), 
                    Date(16, 3, 2025)
                }; 
    vector<Date> date_vec3(date_vec1); 
    vector<Date> date_vec4(5); 
    vector<Date> date_vec5(5, Date(1, 1, 2025)); 

    // iterating over date vectors 
    // date_vec1 
    cout << "date_vec1 : using index" << endl; 
    for(vector<Date>::size_type i = 0; i != date_vec1.size(); ++i) 
        date_vec1[i].show(); 

    cout << "date_vec1 : using iterator" << endl; 
    for(vector<Date>::iterator iter = date_vec1.begin(); iter != date_vec1.end(); ++iter) 
        iter->show(); 

    // date_vec2 
    cout << "date_vec2: using index" << endl; 
    for(vector<Date>::size_type i = 0; i != date_vec2.size(); ++i) 
        date_vec2[i].show(); 

    cout << "date_vec2 : using iterator " << endl; 
    for(vector<Date>::iterator iter = date_vec2.begin(); iter != date_vec2.end(); ++iter) 
        iter->show(); 

    // date_vec3 
    cout << "date_vec3 : using index" << endl; 
    for(vector<Date>::size_type i = 0; i != date_vec3.size(); ++i) 
        date_vec3[i].show(); 

    cout << "date_vec3 : using iterator " << endl; 
    for(vector<Date>::iterator iter = date_vec3.begin(); iter != date_vec3.end(); ++iter) 
        iter->show(); 

    // date_vec4 
    cout << "date_vec4 : using index " << endl; 
    for(vector<string>::size_type i = 0; i != date_vec4.size(); ++i) 
        date_vec4[i].show(); 

    cout << "date_vec4 : using iterator" << endl; 
    for(vector<Date>::iterator iter = date_vec4.begin(); iter != date_vec4.end(); ++iter) 
        iter->show(); 
        
    // date_vec5 
    cout << "date_vec5 : using index" << endl; 
    for(vector<string>::size_type i = 0; i != date_vec5.size(); ++i) 
        date_vec5[i].show(); 

    cout << "date_vec5 : using iterator" << endl; 
    for(vector<Date>::iterator iter = date_vec5.begin(); iter != date_vec5.end(); ++iter) 
        iter->show(); 
} 

// struct MyDate{8, 3, 2025}; 
// struct Date* pDate = &MyDate; 
// (*pDate).day == pDate->day; 
// (*pDate).month == pDate->month;  
// (*pDate).year == pDate->year; 
