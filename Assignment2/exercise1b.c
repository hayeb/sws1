#include <stdio.h>

/* This program reads bytes from /dev/urandom until the byte equals 42.
 */
int main(void) {
    printf("Starting reading from random..") ;
    FILE *fp;
    fp = fopen("/dev/urandom", "rb") ;

    if (fp == NULL) {
	fprintf(stderr, "Failed to open //dev//urandom.\n") ;
	return -1 ;
    }

    // Determine size of a character
    char c = '\0';
    int count = 0 ;
    while (c != (char) 42) {
	c = fgetc(fp) ;
	fprintf(stdout, "%i %u %x\n", c, c, c) ;
	count++ ;
    }
    return 0 ;
    //fprintf(stdout, "Found %i random bytes.\n", count) ;
}
  
