// is_unique is an algorithm which determines if a string has all
// unique characters
// is_unique2 does the same as is_unique but does not use additional
// data structures

#include <iostream>
#include <string>
#include <map>

bool is_unique(std::string str) {
  int len = str.length();
  std::map<char, bool> chars;

  for (int i = 0; i < len; i++) {
    if (chars.count(str[i]) != 0) return false;

    else {
      chars[str[i]] = true;
    }
  }

  return true;
}

bool is_unique2(std::string str) {
  int len = str.length();

  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      if (str[i] == str[j]) return false;
    }
  }

  return true;
}

int main() {
  std::string str1 = "abcde";
  std::string str2 = "abcdee";

  std::cout << is_unique(str1) << is_unique(str2) << std::endl;
}
