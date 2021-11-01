#include <iostream>
#include <bits/stdc++.h>

//You can redefine almost every operator in cpp
struct point{
  int x;
  int y;
  point(){};
  point(int x, int y) :
  x(x), y(y) {}
};
point operator+(point punkt, const int &i)
{
  punkt.x+=i;
  punkt.y+=i;
  return punkt;
}

point operator-(point punkt, const int &i)
{
  punkt.x -= i;
  punkt.y -= i;
  return punkt;
}

std::ostream& operator<<(std::ostream& stream, const point &punkt)
{
  stream<< punkt.x << " " << punkt.y;
  return stream;
}

std::istream& operator>>(std::istream& stream, point &punkt)
{
  std::cout<< "Podaj x i y"<<std::endl;
  stream >> punkt.x >> punkt.y;
  return stream;
}
//Typically, once operator< is provided, the other relational operators are implemented in terms of operator<.
bool operator<(const point &punkt, const point &punkt2)
{
  return (punkt.x < punkt2.x && punkt.y < punkt2.y ? true : false);
}
bool operator>(const point &punkt, const point &punkt2) {return punkt2 < punkt;}
bool operator>=(const point &punkt, const point &punkt2) {return !(punkt < punkt2);}
bool operator<=(const point &punkt, const point &punkt2) {return !(punkt > punkt2);}
bool operator==(const point &punkt, const point &punkt2) {return punkt2 >= punkt && punkt2 <=punkt;}
bool operator!=(const point &punkt, const point &punkt2) {return !(punkt2 == punkt);}



int main(){
  point punkt(23,43);
  point punkt2(12,23);
  std::cout<< punkt << std::endl;
  std::cout<< punkt+10 << std::endl;
  std::cout<< punkt-12 << std::endl;

  //comparison of points
  std::cout<< (punkt < punkt2) << std::endl;
  std::cout<< (punkt > punkt2) << std::endl;
  std::cout<< (punkt <= punkt2) << std::endl;
  std::cout<< (punkt >= punkt2) << std::endl;
  std::cout<< (punkt != punkt2) << std::endl;
  std::cout<< (punkt == punkt2) << std::endl;

}
