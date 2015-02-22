#include <stdio.h>

/* This program reads bytes from /dev/urandom until character representation of the byte equals 42.
 */
int main(void) {
    printf("Starting reading from random..") ;
    FILE *fp;
    // Open file as "read binary"
    fp = fopen("/dev/urandom", "rb") ;

    if (fp == NULL) {
	fprintf(stderr, "Failed to open //dev//urandom.\n") ;
	return -1 ;
    }

    char c;
    int count = 0 ;
    while (c != (char) 42) {
	c = fgetc(fp) ;
	fprintf(stdout, "%i %u %x\n", c, c, c) ;
	count++ ;
    }
    fprintf(stdout, "Found %i random bytes.\n", count) ;
    return 0 ;
}
  
