#include <stdio.h> 
#include <stdlib.h> 

void pointer_to_const(void); 
void const_pointer_demo(void); 
void const_pointer_to_pointer_to_const(void); 

int main(void) 
{
    pointer_to_const(); 
    const_pointer_demo(); 
    const_pointer_to_pointer_to_const(); 

    return (0); 
}

void pointer_to_const(void) 
{
    const int* ptr; // ptr is not the constant entity *ptr is 
                    // therefore ptr need not be initialized 
    int n = 100; 
    
    printf("pointer_to_const_demo(): Before (n = 200): n = %d\n", n); 
    n = 200; 
    printf("pointer_to_const_demo(): After (n = 200): n = %d\n", n); 

    ptr = &n; 
    // *ptr = 500; // Compile Time Error (LHS must be modifiable lvalue) 
                // which is not in this case 

    int m; 
    printf("pointer_to_const_demo(): Before ptr = &m: ptr = %p\n", ptr); 
    ptr = &m; // as ptr is not a constant entity here, 
                // ptr can change to whome it points 
    printf("pointer_to_const_demo(): After ptr = &m: ptr = %p\n", ptr); 

    const int k = 500; 
    ptr = &k; 
    /*
        when you declare a pointer to const of type T (const T* ptr) 
        Then ptr can hold address of const/non-const variable of type T 
        T v1; 
        const T v2 = init_val; 

        ptr = &v1; // ok 
        ptr = &v2; // ok 
    */
}

void const_pointer_demo(void) 
{
    int n = 500;
    // reading of following declaration : ptr is const pointer to int  
    int* const ptr = &n; // (1) ptr is a const entity here, and therefore we have obligation to initialize 

    // (2) as ptr is a const entity and not *ptr, therefore we can change the state of 
    // pointee by writting on *ptr (t.e. by keeping *ptr on LHS of assignment statement) 
    printf("Before *ptr = 1000: *ptr = %d\n", *ptr); 
    *ptr = 1000; // ok 
    printf("After *ptr = 1000: *ptr = %d\n", *ptr); 

    // (3) As pointer is a const entity here, we cannot change to whome it points to 
    // after initialization 
    int m; 
    // ptr = &m; // compile time error (ptr is not a modifiable lvalue) 

    // (4) as constness is applicable to ptr and not to *ptr(pointee) 
    // through ptr we can read/write on pointee 
    // Let ptr be a const pointer to type T 
    // we should not load address of const object of type T (const T objT) 
    // What happedns if we do that? 
    // c compiler -> warning  
    // C++ compiler -> compile time error 
    // C++ compiler will withdraw compile time-error with const_cast 
    // If we want we can load address of const object of type T in T* const ptr 
    // Whether or not attemt to change objT via ptr will come to fruition 
    // depends on the nature of constness of objT. Is it logically only constness? 
    // (i.e. objT is in read write area but marked const at source code level) 
    // in this case the attempt will succeed 
    // Is it physically const? (is it located in hardware protected write area? ) 
    // Then attempt to change objT via ptr will trigger memory violation exception at run-time. 
} 

void const_pointer_to_pointer_to_const(void) 
{
    int n = 100; 
    const int m = 200; 

    const int* const ptr1 = &n; 
    const int* const otr2 = &m; 
} 

