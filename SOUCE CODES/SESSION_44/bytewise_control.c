#include <stdio.h> 
#include <stdlib.h> 

unsigned long long x = 0; 
// [00] [00] [00] [00] [00] [00] [00] [00] 
// &x

int main(void) {
    *(char*)&x = 0x11; 
    // [11] [00] [00] [00] [00] [00] [00] [00] 
    printf("x = %llx\n", x); 

    *(unsigned short*)((char*)&x + 1) = 0x3322; 
    // [11] [22] [33] [00] [00] [00] [00] [00] 
    printf("x=%llx\n", x); 

    *(unsigned int*)((char*)&x + 3) = 0x77665544; 
    // [11] [22] [33] [44] [55] [66] [77] [00] 
    printf("x=%llx\n", x); 

    *((char*)&x + 7) = 0x88; 
    // [11] [22] [33] [44] [55] [66] [77] [88] 
    printf("x=%llx\n", x); 

    exit(EXIT_FAILURE);   
} 