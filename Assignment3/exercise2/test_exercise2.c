#include <stdio.h>
#include "exercise2.h"

int test_addvector() ;
int test_memcmp() ;

int main(void) {
    int i = test_addvector() ;
    if (i == 0) {
	printf("Addvector: Test failed.") ;
    }
    else if (i == 1) {
	printf("Addvector: Test passed.") ;
    }
    else {
	printf("Unknown error..") ;
    } 
    printf("\n");

    int j = test_memcmp() ;
    if (j == 0) {
	printf("memcmp: Test failed.") ;
    }
    else if (j == 1) {
	printf("memcmp: Test passed.") ;
    }
    else {
	printf("Unknown error.") ;
    }
    printf("\n") ;
    return 0 ;
}

int test_addvector() {
    int result = 1 ;
    const unsigned int LEN = 4 ;
    const int a[] = {1, 2, 3, 4};
    const int b[] = {1, 2, 3, 4};
    int r[LEN] ;
    const int *p_a = a ;
    const int *p_b = b ;
    int *p_r = r ;
    // Add the two arrays, and check if the answers are correct.
    addvector(p_r, p_a, p_b, LEN) ;
    for (int i = 0; i < (signed) LEN; i++) {
       if (r[i] != 2 * i + 2) {
	  result = 0 ;
       }
    }
    return result ;
}

int test_memcmp() {
    char *s1 = "Hallo ik ben Haye" ;
    char *s2 = "Hallo ik ben niet Haye" ;
    int result = 1 ;
    char *p1 = s1 ;
    char *p2 = s2 ;
    unsigned int length_s1 = 17 ;
    unsigned int length_s2 = 22;
    int result1 = compare_array(p1, p1, length_s1) ;
    int result2 = compare_array(p1, p2, length_s2) ;
    if (result1 != 0 || result2 == 0) {
	result = 0 ;
    }
    return result ;
}

