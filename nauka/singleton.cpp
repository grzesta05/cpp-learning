#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class singleton{
private:
  static singleton* instance;
  //Tu trzymamy instancję, sprawdzając, czy ona istnieje, będziemy mogli ją przydzielić. Nie możemy dać tutaj "=0", bo musiałaby być const.

  Singleton(); //Prywatny konstruktor!!!

public:
  //function to check whether working
  void working(){cout<< "yup";}
  //function to check whether working

  static singleton* getInstance();
};

singleton *singleton::instance=0;

singleton *singleton::getInstance()
{
  if(instance==0)
  instance = new singleton;
  return instance;
}

int main(){

  singleton* r = singleton::getInstance();
  r->working();
  singleton* f = singleton::getInstance();
  f->working();

  //adresy są te same - to jeden obiekt
  cout<<f<<endl<<r;
}
