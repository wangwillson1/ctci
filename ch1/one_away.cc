// one_away checks if two strings are one or zero edits apart

#include <iostream>
#include <string>

bool add_rep(std::string &str1, std::string &str2, int len) {
  bool off = false;
  for (int i = 0; i < len; i++) {
    if (!off && str2[i] != str1[i] && str2[i] == str1[i+1]) {
      off = true;
    }
    else if (off && str2[i] != str1[i+1]) return false;
  }

  return true;
}

bool one_away(std::string &str1, std::string &str2) {
  // Get lengths of both strings
  int len1 = str1.length();
  int len2 = str2.length();

  if (len1 > len2) {
    if (len1 - len2 > 1) return false;
    return add_rep(str1, str2, len2);
  }

  else if (len2 > len1) {
    if (len2 - len1 > 1) return false;
    return add_rep(str2, str1, len1);
  }

  else {
    bool one_edit = false;
    for (int i = 0; i < len1; i++) {
      if ((str1[i] != str2[i]) && !one_edit) {
        one_edit = true;
      }

      else if ((str1[i] != str2[i]) && one_edit) {
        return false;
      }
    }

    return true;
  }
}

int main() {
  std::string str1 = "pale";
  std::string str2 = "ple";
  std::string str3 = "pales";
  std::string str4 = "bale";
  std::string str5 = "bake";
  std::cout << one_away(str1, str2) << one_away(str3, str1)
            << one_away(str1, str4) << one_away(str1, str5) << std::endl;
}
