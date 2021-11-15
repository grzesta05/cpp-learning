#include <iostream>
#include <bits/stdc++.h>


std::string getDecimal(int a, int b)
{
  std::string decimal;

  for(int i = 0; i < 400 && a!=0; i++)
  {
    while(a/b == 0)
    {
    a*=10;
    decimal+="0";
  }
    decimal+= std::to_string(a/b);
    a -=(a/b)*b;
    a*=10;
  }
  return decimal.substr(1);
}
int findPattern(std::string s)
{
  if(s.length() <100)
  return -1;
  std::string pattern;
  pattern+=s[0];
  bool found = false;
  for(int i = 1; i < 100 && !found; i++)
  {
    pattern+=s[i];
    if(pattern[0] == s[i])
    {
      found=true;
      for(int o = i; o < i+pattern.length(); o++)
      {
        if(s[o] != pattern[o-i])
        found=false;
      }
    }
  }
  for(int i = 0; i < 3*pattern.length(); i+=pattern.length()-1)
  {
    if(s.substr(i, pattern.length()-1) != pattern.substr(0,pattern.length()-1))
        found=false;
  }
  return found? pattern.length()-1 : -1;
}
int main()
{

  std::cout<< findPattern(getDecimal(1,));
}
