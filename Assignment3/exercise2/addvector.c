void addvector(int *r, const int *a, const int *b, unsigned int len) {
   unsigned int i = 0 ;
   for (i = 0; i < len; i++) {
      *(r + i) = *(a + i) + *(b + i) ; 
   }

}
