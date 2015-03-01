#include <stdio.h>

void addvector(int *r, const int *a, const int *b, unsigned int len) {
   unsigned int i = 0 ;
   for (i = 0; i < len; i++) {
      *(r + i) = *(a + i) + *(b + i) ; 
   }

}
/* Returns 0 if arrays are equal */
int compare_array(const void *s1, const void *s2, unsigned int n) {
    unsigned char* c1 = (unsigned char*) s1 ;
    unsigned char* c2 = (unsigned char*) s2 ;
    unsigned int i = 0 ;
    int result = 0 ;
    for (i=0; i <= n && result == 0; i++) {
	result = *(c1 + i) - *(c2 + i) ;
    }
    return result ;
}
