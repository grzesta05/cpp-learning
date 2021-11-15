
  #include <iostream>
  #include <bits/stdc++.h>
  #include "class.cpp"
  #include "overloading.cpp"
  using namespace std;

  int main()
  {
  ClassO klasa1("uczniowie","subjects");
  for(int i = 0; i < klasa1.getStudents().size(); i++)
  {
  cout<<klasa1.getStudents()[i]<<endl;
  cout<< (klasa1.getStudents()[i].isGrat ? "Jest Pasek": "Nie ma paska :c")<<endl;
  }
  vector<subject> Sub = klasa1.getSubjects();
    cout<< endl<<"Nauczyciele:"<<endl;
  for(int i = 0; i < Sub.size(); i++)
  {
    cout<<Sub[i].getTeacher()<< " uczy " << Sub[i].getName()<<endl;
  }
  }
