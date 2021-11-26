#include <iostream>
#include <bits/stdc++.h>

int& brr()
{
  static int a = 10;
  return a;
}

int main()
{
  int i = 9;
  //lvalue - rvalue (in this case)
  int a = i;
  // lvalue - lvalue

  //lvalue is value written in our memory
  //rvalue is temporary value with no saved memory

  brr() = 5; // it returns the adress of a - static int, so we get a modifiable lvalue

  const int& var = 10;
  // Despite passing an address of 10,
  // by using const, compiler creates temporary
  //variable and assignes 10 to it so that the operation is possible
}
