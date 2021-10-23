#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  string str1 = "type";
  bool contain = str1.find("typ") != string::npos; // string find
  // String functions
  transform(str1.begin(), str1.end(), str1.begin(), ::toupper); // transform to upper
  string a = str1.substr(1/*beginning*/, 2 /*end*/); // substr


}
