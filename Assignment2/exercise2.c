#include <stdio.h>

void show_bytes(unsigned char *p, int length) {
    for (int i = 0; i < length; p++) {
	fprintf(stdout, "%p\t\t\t%x\t\t\t%i\n", &*p,(unsigned char) *p, (unsigned char) *p) ;
	i++ ;
    }
}

int main(void) {
    short i = 0x1234 ;
    char x = -127 ;
    long sn1 = 4290402 ;
    long sn2 = 4018044 ;
    int y[2] = {0x11223344, 0x44332211} ;

    fprintf(stdout, "Size of i: %ld\n", sizeof(i));
    fprintf(stdout, "Size of x: %ld\n", sizeof(x));
    fprintf(stdout, "Size of sn1: %ld\n", sizeof(sn1));
    fprintf(stdout, "Size of sn2: %ld\n", sizeof(sn2));
    fprintf(stdout, "Size of y: %ld\n", sizeof(y)) ;

    // Print tabel layout
    fprintf(stdout, "\nAddress\t\t\tcontent (hex)\t\t\tcontent (dec)\n") ;
    fprintf(stdout, "i:\n") ;
    show_bytes((unsigned char*) &i, (unsigned int) sizeof(i)) ;
    fprintf(stdout, "x:\n") ;
    show_bytes((unsigned char*) &x, (unsigned int) sizeof(x)) ;
    fprintf(stdout, "sn1:\n") ;
    show_bytes((unsigned char*) &sn1, (unsigned int) sizeof(sn1)) ;
    fprintf(stdout, "sn2:\n") ;
    show_bytes((unsigned char*) &sn2, (unsigned int) sizeof(sn2)) ;
    fprintf(stdout, "y:\n") ;
    show_bytes((unsigned char*) &y, (unsigned int) sizeof(y));

}

