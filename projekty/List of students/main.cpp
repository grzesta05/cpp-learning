
  #include <iostream>
  #include <bits/stdc++.h>
  #include "class.cpp"
  #include "overloading.cpp"
  using namespace std;

  int main()
  {
  ClassO klasa1("uczniowie","subjects");
  cout<<"==Wypisanie KLasy (Przeładowanie operatora)=="<<endl<<klasa1;
  cout<<endl<<"==Wypisanie listy uczniów wraz z ocenami (Przeładowanie operatora i funkcje klasy Student)=="<<endl;
  for(int i = 0; i < klasa1.getStudents().size(); i++)
  {
  cout<<setprecision(2)<<klasa1.getStudents()[i]<< endl<<" z ocenami o sredniej " << klasa1.getStudents()[i].getAvg()<<endl;
  }
  vector<subject> Sub = klasa1.getSubjects();
    cout<< endl<<"Wypisanie Nauczycieli"<<endl<<"Nauczyciele:"<<endl;
  for(int i = 0; i < Sub.size(); i++)
  {
    cout<<Sub[i].getTeacher()<< " uczy " << Sub[i].getName()<<endl;
  }
  }
