#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct RGB{
  int r;
  int g;
  int b;
  RGB(int x, int y, int z){r = x; g = y; b = z;}
};

int main(){
  vector<RGB> vec;
  for(int r = 0;r <= 255; r++)
    for(int g = 0;g <=255; g++)
        for(int b = 0;b <=255;b++){
    RGB kolor(r,g,b);
    vec.push_back(kolor);
  }
  for(const RGB& kolor : vec)
  {
    cout<< kolor.r << ", " << kolor.g << ", " << kolor.b<< endl;
  }
}
