#include <iostream>
#include <bits/stdc++.h>
template<typename x> class node
{
public:
  x value;
  node<x> *prev;
  node<x> *next;
  node(x value, node<x> &prev1){
    this->value = value;
    prev = &prev1;
    prev->next = this;
  }
  node(x value) : value(value)  {}
};

int main()
{
  node<std::string> e1("Mama");
  node<std::string> e2("Mama2", e1);

  std::cout<< e1.next->value;

}
