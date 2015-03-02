int magic_function() {
    char *string = "SSRLRLRLSSSRRRLLSSSSSSRLLLSSSSSSSSRLRLSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSLLRLRLLSSRRRSLLSLRLRLSRSSSS" ;    
    int a; int b; int c; int d;
    a = 3123;
    b = 31 * a ;
    c = 334 * b + a;
    d = a*b;    

    return (a + b + c + d + sizeof(string)) ;
}
