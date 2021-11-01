#include <iostream>
#include <bits/stdc++.h>

int main(){
  std::string str1 = "type";
  // String functions!
  bool contain = str1.find("typ") != std::string::npos; // string find
  std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper); // transform to upper
  std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
  std::string a = str1.substr(1/*beginning*/, 3 /*end*/); // substr
  std::reverse(str1.begin(), str1.end());
  std::cout<< a;

}
