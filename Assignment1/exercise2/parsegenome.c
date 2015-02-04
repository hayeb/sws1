#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int check_valid_genomes(FILE *file) {
    char ch, old_ch;
    int count = 0 ;
    int linecount = 1;
    int correct = 0;
    while ((ch = fgetc(file)) != EOF) {
        old_ch = ch ; 
        if (ch != '\n') {
            if (ch == 'A' || ch == 'T' || ch == 'C' || ch == 'G') {
                count += 1 ;
            }
        }
        else {
            if (count != 100) {
                fprintf(stderr, "File contains error on line: %i\n", linecount);
                correct = 1 ;           
            }
            count = 0 ;
            linecount += 1 ;
       } 
    } 
    if (old_ch == '\n') {
       linecount -= 1 ;
    }    
    if (linecount != 500) {
        fprintf(stderr, "File does not have the correct amount of lines.\n");
        fprintf(stderr, "Number of lines: %d\n", linecount) ;
        return 1 ;    
    }
    return correct;



}
int main(int argc, char *argv[]) {
	printf("Opening file..\n") ;
    FILE *fp;
    fp = fopen("genome.txt", "r");

    if (fp  == NULL) {
       fprintf(stderr, "Can't open the file!\n") ;
       return 1  ;
    } 
    
    if (check_valid_genomes(fp) == 0) {
        fprintf(stdout, "Genome file validated.\n");
        return 0;
    }
    else {
        fprintf(stderr, "Genome file is corrupt or incorrect.\n");
        return 1;
    }
} 
