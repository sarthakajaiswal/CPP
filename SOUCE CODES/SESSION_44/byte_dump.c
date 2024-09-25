#include <stdio.h> 
#include <stdlib.h> 

struct A{
    float a; 
    int b; 
    char c; 
}inA = {3.1414, 0x12345678, 'b'}; 

unsigned long long x = 0xaabbccdd;  
char b = 'a'; 

void byte_dump(void* addr, size_t size, const char* msg);   

int main(void) {
    byte_dump(&inA, sizeof(inA), "Byte dump of inA"); 
    byte_dump(&x, sizeof(x), "Byte dump of x"); 
    byte_dump(&b, sizeof(b), "Byte dump of b"); 

    exit(EXIT_FAILURE);   
} 

void byte_dump(void* addr, size_t size, const char* msg) {
    if(msg) 
        puts(msg); 

    size_t i = 0; 
    while(i < size) {
        printf("m[%llu] = %hhx\n", 
            (unsigned long long)addr + i, 
            *(unsigned char*)((unsigned char*)addr + i)
        ); 

        i++; 
    } 
} 