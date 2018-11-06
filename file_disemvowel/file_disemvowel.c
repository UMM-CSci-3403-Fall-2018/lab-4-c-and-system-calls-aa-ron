#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUF_SIZE 1024

bool is_vowel(char letter) {
  if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E'|| letter == 'I'|| letter == 'O'|| letter == 'U'){
    return true;
  } else {
    return false;
  }
}

int copy_non_vowels(int numChars, char* inBuf, char* outBuf) {
  int outIndex = 0;
  for(int i = 0; i < numChars; i ++){
    if(!is_vowel(inBuf[i])){
      inBuf[i] = outBuf[outIndex];
      outIndex++;
    }
  }
  return outIndex;
}

void disemvowel(FILE* inFile, FILE* outFile) {
  /*
  * Copy all the non-vowels from inFile to outFile.
  *
  * Create input and output buffers, and use fread() to repeatedly read
  * in a buffer of data, copy the non-vowels to the output buffer, and
  * use fwrite to write that out.
  */

  char *inBuf = (char*) calloc(BUF_SIZE,sizeof(char));
  char *outBuf = (char*) calloc(BUF_SIZE,sizeof(char));
  size_t bufSize = fread(inBuf, sizeof(char), BUF_SIZE, inFile);

  while(bufSize != 0){
    int non_vowels = copy_non_vowels(bufSize, inBuf, outBuf);
    fwrite(outBuf, sizeof(char), non_vowels, outFile);
    bufSize = fread(inBuf, sizeof(char), BUF_SIZE, inFile);
  }
}


int main(int argc, char *argv[]) {
  FILE *inFile;
  FILE *outFile;

  //Nothing passed into command line. Read from STDIN
  if(argc == 0){
    inFile = stdin;
   	outFile = stdout;
    disemvowel(inFile, outFile);
  }

  //Read from file, print to STDOUT
  else if(argc == 1){

  }

  //Read from file, write from file
  else if(argc == 2){

  }

  if(argc > 2){
    printf("Warning! Extraneous arguments passed. Only the first two were handled.");
  }



  return 0;
}
