#include <stdio.h>
#include <stdlib.h>
#include "magic_function.h"

void create_4mb_array() {
    const int size = 4194304;
    char array[size] ;
    int i = 0;
    for (i = 0; i < size; i++) {
	array[i] = 'X';
    }
}

int main(void) {
    const int size = 4194304;
    int i;
    const unsigned char* p =(unsigned char*) &i;
    unsigned int bytes = 0 ;
    int works = 0 ;
    char* heap_array = malloc(size);
    create_4mb_array() ;
    magic_function() ;

    for (i = 0; i < size; i++) {
	*(heap_array+i) = *(p-i);	
    }
    
    for (int j = 0; j < size; j++) {
       if ( *(heap_array+j) != 'X' && *(heap_array + j + 1) != 'X') {
	   printf("heap[%d] = %c\n", j, *(heap_array + j));
	   bytes++;
	}
    }
    printf("magic_function uses %d bytes. Works: %d\n", bytes, works) ;
}
