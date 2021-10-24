#include <bits/stdc++.h>
#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;

class City{
  public:
    int index;
    string country;
    string name;
    double x_cor;
    double y_cor;

    City(string line)
    {

    index = (int)(line.substr(0, line.find("  ")));
    int o = line.find("  ");

    country = line.substr(o, line.find("  ", o, line.length()));
    o = line.find("  ", o, line.length());

    name = line.substr(o, line.find("  ", o, line.length()));
    o = line.find("  ", o, line.length());

    x_cor = stod(line.substr(o, line.find("  ", o, line.length())));
    o = line.find("  ", o, line.length());

    y_cor = stod(line.substr(o, line.find("  ", o, line.length())));
}
};



int main(){

  vector<City> miasta;
  fstream file;
  file.open("miasta.txt");
  string line;
  int i = 0;

  while(getline(file, line))
  {

      City miasto(line);
      miasta.push_back(miasto);
      i++;
  }

  cout<< miasta[10].index;

}
