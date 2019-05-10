#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* repeated_char(char* input) {
  // Result would not print, so I had to use malloc
  // Would be inefficient for this problem, 
  // Since I would be allocating more space than needed
  char* repeated_char_final = malloc(sizeof(char) * (sizeof(input) + 1));
  int repeated_char_counter = 0;

  int length = strlen(input);
  // Counter variable for the current character
  int current_counter = 0;

  // Loop through the input of characters
  for (int i = 0; i < length;  i++) {
    // If this is the first character
    if (i == 0) {
      current_counter++;
      continue;
    }

    // If the previous character is the same as the current character
    // We increment the counter
    if (input[i-1] == input[i]) {
      current_counter++;
    }

    // If the previous character is not the same as the current character
    // We print the character and print the counter amount
    // And reset counter after everything has been printed
    if (input[i-1] != input[i]) {
      repeated_char_final[repeated_char_counter] = input[i-1];
      repeated_char_counter++;
      repeated_char_final[repeated_char_counter] = current_counter + '0';
      repeated_char_counter++;
      current_counter = 0;
    }
  
    // If this is the last character in the string
    // We print the character and the counter
    if (i == length - 1) {
      repeated_char_final[repeated_char_counter] = input[length - 1];
      repeated_char_counter++;
      repeated_char_final[repeated_char_counter] = current_counter + '0';
      repeated_char_counter++;
    }
  }

  return repeated_char_final;
}

int main(void) {
  char* result = repeated_char("aaaabbcccdedfr");
  printf("%s", result);
  // Since I used malloc, have to free the memory used 
  free(result);
  return 0;
}

