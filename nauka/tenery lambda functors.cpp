#include <iostream>
#include <bits/stdc++.h>

//function()

  //functor that returns reversed string
  class functor{
  public:
    std::string operator()(std::string a)
    {
      char o;
      for(int i = 0; i < a.length()/2; i++)
      {
        o = a[i];
        a[i] = a[a.length()-i-1];
        a[a.length()-i-1] = o;
      }
      return a;
    }
  };

int main() {

  //Calling a functor
  functor Functor;
  std::cout<<Functor(name);
  
  //example of lambda usage. Lambda is a derivative of functors - function objects.
  auto lambdaExample = [/*You can place & or = or this to include all the variables and functions*/](/*Arguments*/){/*lambda body here*/} ;
  auto lambda1 = [](int i){return i*i;};
  int i = lambda1(5);
  std::cout<<i<<std::endl;

  //Trenary expression is a conditional statement with two outcomes
  //For example
  std::string name = "Grzegorz";
  int o = (name == "Grzegorz" ? 1 : 0);
  std::cout<< o;


}
