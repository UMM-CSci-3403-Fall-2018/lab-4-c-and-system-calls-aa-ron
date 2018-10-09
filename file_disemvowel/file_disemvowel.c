#include <stdio.h>
#include <stdbool.h>

#define BUF_SIZE 1024

bool is_vowel(char c) {
  if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E'|| letter == 'I'|| letter == 'O'|| letter == 'U'){
    return true;
  } else {
    return false;
  }
}

int copy_non_vowels(int num_chars, char* in_buf, char* out_buf) {
    /*
     * Copy all the non-vowels from in_buf to out_buf.
     * num_chars indicates how many characters are in in_buf,
     * and this function should return the number of non-vowels that
     * that were copied over.
     */
}

void disemvowel(FILE* inputFile, FILE* outputFile) {
    /*
     * Copy all the non-vowels from inputFile to outputFile.
     * Create input and output buffers, and use fread() to repeatedly read
     * in a buffer of data, copy the non-vowels to the output buffer, and
     * use fwrite to write that out.
     */
}


int main(int argc, char *argv[]) {
    FILE *inputFile;
    FILE *outputFile;

    //Nothing passed into command line. Read from STDIN
    if(argc == 0){

    }

    //Read from file, print to STDOUT
    else if(argc == 1){

    }

    //Read from file, write from file
    else if(arc == 2){

    }

    if(arc > 2){
      printf("Warning! Extraneous arguments passed. Only the first two were handled.")
    }



    return 0;
}
