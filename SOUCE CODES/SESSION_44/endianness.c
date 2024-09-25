#include <stdio.h>
#include <stdlib.h> 

int N = 0xaabbccdd; 

int main(void) {
    if(*(unsigned char*)&N == 0xaa) 
        puts("This is Big Endian Machine"); 
    else if(*(unsigned char*)&N == 0xdd) 
        puts("This is Little Endian Machine"); 
    else 
        printf("%x", *(char*)&N); 

    exit(EXIT_FAILURE);  
} 