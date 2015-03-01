#include <stdio.h>
#include "magic_function.h"

char* create_4mb_array() {
    const int size = 4194304;
    char array[size] ;
    int i = 0;
    for (i = 0; i < size; i++) {
	array[i] = 'X';
    }
    char *p = array;
    return p;
}

int main(void) {
    const int size = 4194304;
    create_4mb_array() ;
    unsigned char* p =(unsigned char*) create_4mb_array() ;
    int i;
    unsigned long bytes = 0 ;
    int works = 0 ;
    magic_function() ;
    for (i = 0; i < size; i++) {
	printf("%p is %c\n", p+i,*(p+i));
	if (*(p+i) != 'X') { 	
	    bytes ++;
	    works = 1 ;
	}
    }
    printf("magic_function uses %lu bytes. Works: %d\n", bytes, works) ;
}

