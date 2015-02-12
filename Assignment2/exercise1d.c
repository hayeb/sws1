#include <stdio.h>
#include <stdint.h>

int main(void) {
    FILE *f;
    f = fopen("/dev/urandom", "rb") ;
    if (f == NULL) {
	fprintf(stdout, "Could not open //dev//urandom. Exiting..\n") ;
	return -1 ;
    }
    int count = 0 ;
    uint16_t int16 ;    
    char c1, c2;
    do {
	c1 = fgetc(f) ;
	c2 = fgetc(f) ;
	unsigned char *ch = (unsigned char*) &int16;
	*ch = c1 ;
	ch++ ;
	*ch = c2 ;
	fprintf(stdout, "%04x\n", int16) ;
	count += 1 ;
    } while (int16 != 42) ;
}
