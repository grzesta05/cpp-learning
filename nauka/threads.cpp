
#include <thread>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int function1()
{
  //sth
}
void function2()
{
  //sth
}
int main()
{
  thread first(function1);
  thread second(function2);

  cout<< first.joinable(); // Czy można połączyć
  cout<< second.joinable(); // Czy można połączyć

  first.join();
  second.join();

}
