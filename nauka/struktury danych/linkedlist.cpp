#include <iostream>
#include <bits/stdc++.h>

template<typename x> class node
{
public:
  x value;
  node<x> *prev = 0;
  node<x> *next = 0;
  node(x value, node<x> *prev1){
    this->value = value;
    prev = prev1;
    if(&*prev1)
    prev1->next = this;
  }
  node(x value) : value(value)  {}
  void operator=(x value)
  {
    this->value = value;
  }
};

template<typename x> class NodeList
{
private:
  node<x> *head = nullptr;
  node<x> *tail = nullptr;
public:
  x& operator[](int i)
  {
    return getItem(i)->value;
  }
  int length = 0;
  node<x> *getHead()
  {
    return head;
  }
  node<x> *getTail()
  {
    return tail;
  }
  node<x> *getItem(int index)
  {
    if(index >= length)
    {
      throw std::invalid_argument("Out of NodeList size");
    }
    else{
      node<x> *pointer = head;
      for(int i = 0; i < index; i++)
      {
        pointer = pointer->next;
      }
      return pointer;
    }
  }
  void addItem(x value)
  {
    length++;
    node<x> *obj = new node<x>(value, tail);
    if(head == 0)
      head = obj;
    tail = obj;
  }
  void removeItem(int index)
  {
    if(index >= length)
    {
      throw std::invalid_argument("Out of NodeList size");
    }
    else{
    length--;
    node<x> *pointer = head;
    for(int i = 0; i < index; i++)
    {
      pointer = pointer->next;
    }
    if(pointer == head)
    {
      head = head->next;
    }
    else{
      pointer->next->prev = pointer->prev;
      pointer->prev->next = pointer->next;
    }
  delete pointer;
  }
}
  ~NodeList()
  {
    node<x> *nextN = head;
    while(nextN->next != 0)
    {
      delete nextN->prev;
      nextN = nextN->next;
    }
    delete nextN;
    delete head;
  }
};



int main()
{
  NodeList<int> list;
for(int i = 1; i < 101; i++)
  {
    list.addItem(i);
  }
  for(int i = 0; i < list.length; i++){
    list[i] = 1;
    std::cout<< list[105] << std::endl;
}
}
