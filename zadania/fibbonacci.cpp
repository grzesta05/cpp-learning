#include <iostream>
#include <bits/stdc++.h>

unsigned int s1(int a, unsigned int res)
{
  res*=a;
  if(a==1)
    return res;
  return s1(--a,res);
}

int fib1(unsigned int a, unsigned int b, int max)
{
  if(max==0)
    return a;
  return fib1(b, a+b, --max);
}
unsigned int s(int a)
{
  return s1(a,1);
}
void fib(int max)
{
  std::cout<< fib1(1,1,max);
}
int main()
{
std::cout<< s(5);
}
