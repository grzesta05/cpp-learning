#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

// Templates are compiled the moment they are called.

//Class template
template<typename x> class rgb{
  x r,g,b;
public:
  x sumOfColors();
  rgb(x r, x g, x b): r(r), g(g), b(b) {}

};
//Template of member function of the class defined above
template<typename x>
x rgb<x>::sumOfColors()
{
  return r+g+b;
}

//A template for a function
template<typename z>z addTo(const z &a,const z &b)
{
  return a+b;
}

int main()
{
//Creating objects of the template class
rgb<int> colorInt(1,2,3);
rgb<string> colorString("str1","str2","str3");
rgb<double> colorDouble(2.0, 3.0, 5.0);
//Calling template function
int a = addTo(1,2);
string o,f;o = "a";f = "e";   string b = addTo(o, f);
}
