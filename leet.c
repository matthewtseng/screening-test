#include <stdio.h>
#include <string.h>

char* leet(char* input) {
  char* leet_final = "";
  int length = strlen(input);

  // Loop through the input 
  for (int i = 0; i < length; i++) {
    // If one of the characters are found, change accordingly
    // Can also use a switch statement to make it look nicer as well
    if (input[i] == 'a' || input[i] == 'A') {
      leet_final[i] = '4';
    } else if (input[i] == 'e' || input[i] == 'E') {
      leet_final[i] = '3';
    } else if (input[i] == 'i' || input[i] == 'I') {
      leet_final[i] = '1';
    } else if (input[i] == 'o' || input[i] == 'O') {
      leet_final[i] = '0';
    } else if (input[i] == 's' || input[i] == 'S') {
      leet_final[i] = '5';
    } else if (input[i] == 't' || input[i] == 'T') {
      leet_final[i] = '7';
    } else if (input[i] == 'd' || input[i] == 'D') {
      leet_final[i] = '5';
    } else {
      // If no characters are found, we keep the character the same
      leet_final[i] = input[i];
    }
  }
  return leet_final;
}

int main(void) {
  printf("%s", "hello");
  char* result = leet("lmao");
  printf("%s", result);
  return 0;
}