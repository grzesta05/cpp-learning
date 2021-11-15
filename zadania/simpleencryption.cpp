#include <iostream>
#include <string>
#include <string>
std::string encrypt(std::string t,const int n)
{
      int a = t.length();
  std::string ev, odd;
  for(int o = 0; o < n; o++){
    odd = ""; ev = "";
  for(int i = 0;i < a; i++)
    {
      if(i%2==0)
      ev+=t[i];
      else
      odd+=t[i];
    }
    t=odd+ev;
  }
  return t;
}

std::string decrypt(std::string et, int n)
{
  std::string res = "";
  int strlen = et.length()/2;

  for(int i = 0; i < n && et!=""; i++){
  res="";
  for(int o = 0; o < strlen; o++)
  {
  res += et[strlen+o];
  res += et[o];
  }
  if(et.length()%2!=0)
  res += et[et.length()-1];
  et=res;
}
  return et;
}

int main(){

  std::string a = ""

  std::string u = encrypt(a,1819);
  std::cout<<decrypt(u,1819);
}
