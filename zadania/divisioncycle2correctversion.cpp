#include <iostream>
#include <bits/stdc++.h>
int findPattern(int n)
{

  while(n % 2 == 0)
  n/=2;

  while(n % 5 == 0)
  n/=5;

  unsigned o = n;
  for(unsigned i = 0; true ; i*=10)
  {
    i+=9;
    if(i % o == 0)
    return std::to_string(i).length();
  }
}

int main()
{
  int a = 18188;
  int n = a;
    while(n>1)
  {
    n/=(n%2==0? 2 : 5);
  }
  std::cout<< (n==0? -1 : findPattern(a));
}
