#include <iostream>
#include <string>
using namespace std;

int main()
{
  //Zmienna - jakaś wartość zapisywana w pamięci || Liczba, tekst, true/false, itp.
  //typy zmiennych
  int integer = 3; // liczba całkowita
  double d = 3.14; //liczba zmiennoprzecinkowa (15 znaków)
  string s = "Sraken pierdaken";

  string stringNowy = "nowy ale string 1234";


  //Kwadrat z gwiazdek
  int n; // Długością boku
  cin>> n;
  string c = "*";
  for(int i = 0; i < n ;i++)
    cout<<c+' ';
    cout<<endl;
  for(int i = 0; i < n-2; i++){
    for(int o = 1; o <= n; o++)
    {
    if(o==1||o==n)
      cout<<c + ' ';
    else
      cout<< "  ";
    }
    cout<<endl;
  }

  for(int i = 0; i < n ;i++)
    cout<<c+' ';

}
