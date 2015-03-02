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
    const int* p = &i;
    unsigned long bytes = 0 ;
    int works = 0 ;
    char* heap_array = malloc(size);

    create_4mb_array() ;
    magic_function() ;

    for (i = 0; i < size; i++) {
	*(heap_array+i) = *(p+i);	
    }
    printf("magic_function uses %lu bytes. Works: %d\n", bytes, works) ;
}

