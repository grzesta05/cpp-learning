
  #include <iostream>
  #include <bits/stdc++.h>
  #include "class.cpp"
  #include "overloading.cpp"
  using namespace std;

  int main()
  {
    ClassO klasa1("uczniowie","subjects");
    cout<< "Podaj akcję, którą chcesz podjąć." << endl;
    cout<< "1. Wypisz średnią arytmetyczną ocen ucznia (podaj id ucznia)"<<endl;
    cout<< "2. Wypisz średnią arytmetyczną ocen klasy"<<endl;
    cout<< "3. Wypisz listę uczniów"<<endl;
    cout<< "4. Wypisz oceny ucznia (Podaj id)"<<endl;
    int n;
    cin>>n;
    switch(n)
    {
      case 1:
        cout<< endl<<"Podaj ID"<<endl;
        int o;
        cin>>o;
        cout<<klasa1.getStudents()[o].getName() << " " << klasa1.getStudents()[o].getAvg();
      break;

      case 2:
        cout<<setprecision(2)<<"Średnia Klasy " << klasa1.getAvg();
      break;
      case 3:
        cout<< klasa1;
      break;
      case 4:
        cout<< endl<<"Podaj ID"<<endl;
        int a;
        cin>>a;
        cout<<klasa1.getStudents()[a];
      break;
    }
  }
