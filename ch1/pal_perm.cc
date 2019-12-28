// Given a string, pal_perm checks to see if it is a permutation of a
//     palindrome.

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

bool perm_pal(std::string &str) {
  // If the string is a palindrome, then all characters will be even, with
  //     possibly one odd
  int len = str.length();
  bool odd_char = false;

  std::map<char, int> charmap;

  // adding all characters to a map (also, make lowercase)
  for (int i = 0; i < len; i++) {
    if (str[i] == ' ') continue;

    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] - 'A' + 'a';
    }
    charmap[str[i]]++;
  }

  // checking for palindrome property
  for (auto &x: charmap) {
    if (x.second % 2 == 1 && odd_char == false) {
      odd_char = true;
    }

    else if (x.second % 2 == 1 && odd_char == true) {
      return false;
    }
  }

  return true;
}

int main() {
  std::string str1 = "Tact Coa";
  std::string str2 = "ABCCBA";
  std::string str3 = "ABC";
  std::cout << std::boolalpha << perm_pal(str1) << std::endl;
  std::cout << std::boolalpha << perm_pal(str2) << std::endl;
  std::cout << std::boolalpha << perm_pal(str3) << std::endl;
}
