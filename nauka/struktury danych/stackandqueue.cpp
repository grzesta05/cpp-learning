#include <iostream>
#include <bits/stdc++.h>

template<typename x> class StackElement{

public:
  x value;
  StackElement *next;
  StackElement(x value) : value(value) {}
};
template<typename x>
class Stack
{
  const int size;
  int elementsQuan = 0;
  StackElement<x> *top;
public:
  Stack(int s) : size(s) {}
  void push(x value)
  {
    if(elementsQuan == size)
      throw std::range_error("Size exceeded");
      else{
    elementsQuan++;
    StackElement<x> *a = new StackElement<x>(value);
    a -> next = top;
    top = a;
    }
  }
  x pop()
  {
    x r = top->value;
    StackElement<x> *a = top->next;
    delete top;
    top = a;
    return r;
  }
  ~Stack()
  {
    StackElement<x> *a = top->next;
    for(int i = 0; i < elementsQuan; i++)
    {
      a = top->next;
      //std::cout<<"Deleted element with value " << top->value<<std::endl;
      delete top;
      top = a;
    }
    delete a;
  }
};

int main()
{
  Stack<int> stos(20);
  for(int i = 0; i < 10; i++)
    stos.push(i);
  for(int i = 0; i < 10; i++)
    std::cout<<stos.pop();


}
