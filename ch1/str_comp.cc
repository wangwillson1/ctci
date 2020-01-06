// str_comp takes a string and compresses the string using counts of repeated
//     characters. That is, aabcccccaa would be a2b1c5a3
//     If the compressed string is not smaller than the original string, then
//     return the original string

#include <iostream>
#include <string>

std::string str_comp(std::string &str) {
  // Getting length
  int orig = str.length();
  if (orig <= 1) return str;

  // Setting up iteration
  std::string result = "";
  char last = str[0];
  int count = 1;

  for (int i = 1; i < orig; i++) {
    if (str[i] == last) {
      count++;
    }

    else {
      // Convert character to string and add to result
      std::string charstr(1, last);
      result += charstr;

      // Convert the count to string and add to result
      std::string numstr = std::to_string(count);
      result += numstr;

      // Set new char and count for iteration
      last = str[i];
      count = 1;
    }
  }

  // We have to add the last character(s)
  std::string charstr(1, last);
  result += charstr;

  std::string numstr = std::to_string(count);
  result += numstr;

  // Check to ensure compression actually compressed it
  int new_len = result.length();

  if (new_len < orig) return result;
  else return str;
}

int main() {
  std::string test = "aabcccccaaa";
  std::string res = str_comp(test);

  std::cout << res << std::endl;
}
