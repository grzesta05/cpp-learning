
  #include <iostream>
  #include <vector>
  #include <string>
  #include <fstream>
  #include <bits/stdc++.h>
  #include "class.cpp"
  #include "overloading.cpp"
  using namespace std;

  int main()
  {
  ClassO klasa1("uczniowie");
  for(int i = 0; i < klasa1.getStudents().size(); i++)
  {
  cout<<klasa1.getStudents()[i]<<endl;
  cout<< (klasa1.getStudents()[i].isGrat ? "Jest Pasek": "Nie ma paska :c")<<endl;
  }
  }
