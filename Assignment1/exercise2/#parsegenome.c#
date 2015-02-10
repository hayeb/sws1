#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check_count_character(char ch, int *pa, int *pc, int *pt, int *pg) ;
bool valid_genomes_file(FILE *file, int *pa, int *pc, int *pt, int *pg);

bool check_count_character(char ch, int *pa, int *pc, int *pt, int *pg) {
  if (ch == 'A') {
    *pa += 1 ;
    return true ;
  }
  else if (ch == 'C') {
    *pc += 1 ;
    return true ;
  }
  else if (ch == 'T') {
    *pg += 1 ;
    return true ;
  }
  else if (ch == 'G') {
    *pt += 1 ;
    return true ;
  }
  else {
    return false ;
  }   
}

// Checks all characters in *file and returns -1 if file is not a correct genome file, 1 if file is a correct genome file.
bool valid_genomes_file(FILE *file, int *pa, int *pc, int *pt, int *pg) {
    char ch, old_ch;
    int count = 0 ;
    int linecount = 1;
    bool correct = true;

    // Loop through file
    while ((ch = fgetc(file)) != EOF) {
        old_ch = ch ;
	// count number of characters in line
        if (ch != '\n') {
	  if (check_count_character(ch, pa, pc, pt, pg)){
	      count += 1 ;
	    }
        }
        else {
	  // print if number of characters in a line is not correct
            if (count != 100) {
                fprintf(stderr, "File contains error on line: %i\n", linecount);
                correct = false ;           
            }
            count = 0 ;
            linecount += 1 ;
       } 
    }

    // If the second to last character is a newline, we've counted 1 line too much
    if (old_ch == '\n') {
       linecount -= 1 ;
    }

    // Print if the number of lines is not correct
    if (linecount != 500) {
        fprintf(stderr, "File does not have the correct amount of lines.\n");
        fprintf(stderr, "Number of lines: %d\n", linecount) ;
        return false ;    
    }
    return correct;
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
	printf("No file specified.\n");
	printf("Usage: ./parsegenome path/to/file\n");
	return -1 ;
    }
    printf("Opening file..\n") ;
    FILE *fp;
    fp = fopen(argv[1], "r");

    int freq_a = 0;
    int freq_c = 0;
    int freq_g = 0;
    int freq_t = 0;
    int *pa = &freq_a ;
    int *pc = &freq_c;
    int *pg = &freq_g;
    int *pt = &freq_t;
    
    if (fp  == NULL) {
      fprintf(stderr, "Can't open file \"%s\".\n", argv[1]) ;
       return -1  ;
    }
    
    if (valid_genomes_file(fp, pa, pc, pt, pg)) {
      fprintf(stdout, "Genome file \"%s\" validated.\n", argv[1]);
	fprintf(stdout, "Frequencies: \n");
	fprintf(stdout, "A: %lf\n", freq_a/50000.0) ;
	fprintf(stdout, "C: %lf\n", freq_c/50000.0) ;
	fprintf(stdout, "T: %lf\n", freq_t/50000.0) ;
	fprintf(stdout, "G: %lf\n", freq_g/50000.0) ;
	
        return 0;
    }
    else {
      fprintf(stderr, "Genome file \"%s\" is corrupt or incorrect.\n", argv[1]);
        return -1;
    }
} 
