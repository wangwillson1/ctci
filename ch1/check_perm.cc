// check_perm checks two strings and decides if one is a permutation of
// the other

#include <iostream>
#include <string>
#include <algorithm>

bool check_perm(std::string &str1, std::string &str2) {
  std::sort(str1.begin(), str1.end());
  std::sort(str2.begin(), str2.end());
  if (str1 == str2) return true;
  else return false;
}

int main() {
  std::string str1 = "abcdefgg";
  std::string str2 = "ggfedcba";
  std::string str3 = "bcdefga";

  std::cout << check_perm(str1, str2) << check_perm(str2, str3) << std::endl;
}
