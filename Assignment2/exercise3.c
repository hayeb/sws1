#include <stdio.h>
#include <stdbool.h>

/* This program gives some information about booleans in C.*/
int main(void) {
    // Print how many bytes a bool uses
    bool b = true ;
    fprintf(stdout, "A boolean uses %lu bytes on this machine.\n", sizeof(b)) ;
    fprintf(stdout, "True in hex: 0x%04x\n", b) ;
    fprintf(stdout, "False in hex: 0x%04x\n", b = false);
    b = 0x11223344 ;
    fprintf(stdout, "tried to assign 0x11223344, noolean is now: 0x%04x\n", b) ;
    // As seen when executing, anything other than 0x0000 is interpreted as true. 

}
