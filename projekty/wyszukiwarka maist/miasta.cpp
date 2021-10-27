#include <bits/stdc++.h>
#include <string>
#include <map>

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
    int begInt = 0;
    int endInt = line.find("  ", begInt);
        index = atoi(line.substr(begInt, endInt-begInt).c_str());
    begInt = endInt+2;endInt = line.find("  ", begInt);
        country = (line.substr(begInt, endInt-begInt));
    begInt = endInt+2;endInt = line.find("  ", begInt);
        name = (line.substr(begInt, endInt-begInt));
    begInt = endInt+2;endInt = line.find("  ", begInt);
        x_cor = atof(line.substr(begInt, endInt-begInt).c_str());
    begInt = endInt+2;endInt = line.find("  ", begInt);
        y_cor = atof(line.substr(begInt, endInt-begInt).c_str());

}
};
vector<City> getCities()
{
    vector<City> miasta;
  fstream file;
  file.open("miasta.txt");
  string line;
  int i = -1;
  while(getline(file, line))
  {
      i++;
      if(i==0)
        continue;

      City miasto(line);
      miasta.push_back(miasto);

  }
  return miasta;
}

City findCity(const vector<City>& miasta, string name){
    vector<City> a;
    for(const auto& o : miasta)
    {
        if(o.name == name)
        {
          a.push_back(o);
        }
    }
    if(a.size() >1){
      string p = " ";
      cout<<"Wybierz jedno miasto z listy. Wpisz odpowiedni numer"<<endl;
    for(int i = 0; i < a.size(); i++){

      cout<< i+1 << ". " << a[i].name<< p << a[i].x_cor << p << a[i].y_cor<<endl;
    }
    int choice;
    cin>>choice;
    return a[choice-1];

  }else if(a.size() == 1)
  {
    return a[0];
  }
  else{

    cout<< "Nie ma takiego miasta, jak " << name << ". Czy miales/mialas moze na mysli:"<<endl<<"Wybierz numer z listy"<<endl;

    bool ifFound = false;
    for(int i = 0; i < name.length(); i++)
    {
      string autocomp = name.substr(0, name.length()-i);
      for(int j = 0; j < miasta.size(); j++)
      {
        if(miasta[j].name.find(autocomp) == 0)
        {
          ifFound = true;
          a.push_back(miasta[j]);
        }
      }
      if(ifFound)
      {
        break;
      }
    }

    for(int i = 0; i < a.size(); i++)
    {
      cout<< i+1 <<". "<< a[i].name<<endl;
    }
    int n;
    cin>>n;
    return a[n-1];
  }
}
void sortCities(vector<City> &miasta, const City &city)
{
       double x0 = city.x_cor;
        double y0 = city.y_cor;
    for(int i = 0; i < miasta.size(); i++)
    {
        double x2 = miasta[i].x_cor;
        double y2 = miasta[i].y_cor;
        double dist = 73*sqrt(pow(x0 - x2,2) + pow(y0 - y2,2));
        for(int o = 0; o < miasta.size(); o++)
        {

        double x1 = miasta[o].x_cor;
        double y1 = miasta[o].y_cor;

        double distO = 73*sqrt(pow(x0 - x1,2) + pow(y0 - y1,2));

            if(distO > dist)
            {
                City miasto = miasta[i];
                miasta[i] = miasta[o];
                miasta[o] = miasto;
            }
        }
    }
}

void checkDist(vector<City>& miasta, const City& city, double r)
{
    double x0 = city.x_cor;
    double y0 = city.y_cor;
    int quan = 0;
    sortCities(miasta, city);
    for(const auto & o : miasta)
    {
        double x1 = o.x_cor;
        double y1 = o.y_cor;
        double dist = 73*sqrt(pow(x0 - x1,2) + pow(y0 - y1,2));

        if(dist <= r && o.name != city.name){

            cout<< o.name << " - " << dist<<endl;
            quan++;
        }   }
cout<< "Suma: " <<quan;
}
/*
int wiredAutocompleteInterview(vector<City> miasta)
{
  cout<< "Zacznij wpisywać pojedyncze litery";
  bool yes = true;
  string resp = "";
  char b;
  cin>>b;
  toupper(b);
  for(int i = 0; i < miasta.size(); i++)
  {
    if(miasta[i].name[0] != b)
    {
      miasta.erase(miasta.begin()+i);
      i =-1;
    }
  }
  resp+=b;
  while(yes)
  {
    cout<<resp;
    cin >> b;
    resp+=b;
    for(int i = 0; i < miasta.size(); i++)
    {
      if(miasta[i].name.find(resp) == -1)
      {
        miasta.erase(miasta.begin() + i);
        i =- 1;
      }}
// testing
  int length = INT_MAX;
  int c;
      for(int i = 0; i < miasta.size(); i++)
      {
        if(miasta[i].name.length() < length)
        {
          length = miasta[i].name.length();
          c = i;
        }
      }
      cout<< miasta[c].name<<endl;
//testing
  }
}
*/
string getName()
{
  cout<<"Podaj nazwę miasta - ";
  string name;
  cin>>name;

  transform(name.begin(), name.end(), name.begin(), ::tolower);
  name[0] = toupper(name[0]);
  for(int i = 0; i < name.length(); i++)
  {
    if(name[i] == *" ")
    name[i+1] = toupper(name[i+1]);
  }
  return name;
}
int main(){
  //Zbieramy promień
    double r;
  //Zbieramy nazwę - nazwa jest odpowiednio formatowana
    string name = getName();
    cout<< "Podaj promień - ";
    cin>>r;
    vector<City> miasta;
    miasta = getCities();
    City c = findCity(miasta,name);
    checkDist(miasta,c,r);

}
