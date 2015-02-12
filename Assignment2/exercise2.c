#include <stdio.h>

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
    // Print short i
    int x1 = ((unsigned char *)(&i))[0];
    fprintf(stdout, "%p\t\t\t%x\t\t\t%u\n", &x1, x1,(unsigned int) x1);
    int x2 = ((unsigned char *)(&i))[1];
    fprintf(stdout, "%p\t\t\t%x\t\t\t%u\n", &x2, x2, (unsigned int) x2) ;
    /*
    int index ;
    for (index = 0; i < sizeof(short); index++) {
	fprintf("%p\t\t\t%x\t\t\tu\n", &i, ((unsigned char)i[index]));
	} */
}

