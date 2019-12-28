// urlify takes a string and changes all spaces to %20
// Note that the input is a string with enough room at the end and an integer
//     representing the "true" length of the string

#include <iostream>

void urlify(char* str, int len) {
  // Counting the number of spaces
  int spaces = 0;
  for (int i = 0; i < len; i++) {
    if (str[i] == ' ') spaces++;
  }

  // Total length of word
  int new_len = len + (2*spaces) + 1;

  // Replacing each space with %20
  for (int i = len; i >= 0; i--) {
    if (spaces == 0) break;

    if (str[i] == ' ') {
      str[i + (spaces*2)] = '0';
      str[i-1 + (spaces*2)] = '2';
      str[i-2 + (spaces*2)] = '%';
      spaces--;
    }

    else {
      str[i + (spaces*2)] = str[i];
    }
  }

  // Printing
  for (int i = 0; i < new_len; i++) {
    std::cout << str[i];
  }
  std::cout << std::endl;
}

int main() {
  char str1[9] = "a b ";
  char str2[18] = "Mr John Smith";
  urlify(str1, 4);
  urlify(str2, 13);
}
