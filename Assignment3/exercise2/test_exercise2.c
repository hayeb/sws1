#include <stdio.h>
#include "addvector.h"

int test_addvector() ;

int main(void) {
   fprintf(stdout, "Testing \"addvector.c\": %d", test_addvector()) ;
   return 0 ;
}

int test_addvector() {
   int result = 0 ;
   int len = 4 ;
   const int a[] = {1, 2, 3, 4};
   const int b[] = {1, 2, 3, 4};
   int r[len] ;
   const int *p_a = a ;
   const int *p_b = b ;
   int *p_r = r ;
   addvector(p_r, p_a, p_b, len) ;

   int i = 0;
   for (i = 0; i < len; i++) {
      if (r[i] != 2 * i) {
	 result = 0 ;
      }
   }
   return result ;
}
