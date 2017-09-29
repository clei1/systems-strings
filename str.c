#include <stdio.h>
#include <stdlib.h>

#include <string.h>
//char *strcpy(char *dest, char *src);
//char *strncpy(char *dest, char *src, size_t n);

int first_test(){
  char s[10];
  s[9] = '\0';
  printf("s: %s\n", s);
  printf("s[9]: %c\n", s[9]);
  
  strncpy(s, "abcdefghijklmno", 10); // copy 10 chars into positions 0-9, overwriting the terminator at position 9

  
  //copy a string from one address to another, stopping at the NUL terminator on the latter string
  printf("copying 10 chrs from \"abcdefghijklmno\" into array\n");
  printf("first 10 chrs from \"abcdefghijklmno\" is \"abcdefghij\"\n"); 
  printf("s: %s\n", s);
  printf("creates a segmentation fault at times\n");

  printf("adding terminating \'0\' back to position 9\n");
  s[9] = '\0'; // position 9 gets the terminator
  printf("s: %s\n", s);
  
  return 0;
}

int second_test(){
  char e[] = "this is another test";
  printf("e: %s\n", e);
  printf("e: %s\n", strcpy(e, "ducklings"));
  printf("e: %s\n", strcpy(e, "this is another test"));
  //printf("e: %s\n", strcpy(e, "superlongmessagewaylongerthanbefore"));
}

int third_test(){
  char d[11] = "helloworld";
  printf("d: %s\n", d);
  
  printf("returned: %s\n", strncpy(d, "abcdefghijklmnop", 3));

  printf("using strncpy for the first 3 positions in d");
  printf("d: %s\n", d);

  printf("using strncpy for a string larger than 11 where s is length 11, 10 for characters and 1 for the terminating 0\n");
  strncpy(d, "abcdefghijklmnop", 12);

  return 0;
}

int main(){

  first_test();
  second_test();
  third_test();
  
  return 0;
}
