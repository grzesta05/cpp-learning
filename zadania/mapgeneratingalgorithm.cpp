#include <iostream>
#include <bits/stdc++.h>
class gMap
{
  public:
    int x;
    int y;
    char **map = nullptr;// empty pointer
    /*Constructors and deconstructor*/
   gMap(const int &x, const int &y)
     {

       this->x = x;
       this->y = y;

       map = new char*[y];

       for(int i = 0; i < y; i++)
       {
         map[i] = new char[x];
       }
       std::cout<< "Map created";
     }
    ~gMap()
    {

      for(int i = 0; i < y; i++)
      {
        delete[] map[i];
      }
      delete[] map;
      std::cout<< "Map destroyed";
    }
    /*Constructors and deconstructor end*/


    void randomMapGeneration()
    {
        srand (time(NULL));
      //const int firstX = rand() % x-2;
      //const int firstY = rand() % y-2;
      const int firstX = x/2;
      const int firstY = y/2;
      int positionX = firstX;
      int positionY = firstY;
      map[positionY][positionX] = ' ';
      char sample;

      for(int i = 0;i < x*y;i++)
      {

        std::cout<<i<<std::endl;
        short in = rand() % 4;
        positionX += (in == 0 || in == 1? rand() % 3 - 1 : 0);
        positionY += (in == 2 || in == 3? rand() % 3 - 1 : 0);
        if(positionY > y-3 || positionX> x-3)
        {
          positionY = firstY;
          positionX = firstX;
          while(map[positionY][positionX] != ' ' || positionY > y-3 || positionX> x-3)
          {
            positionX += (in == 0 || in == 1? rand() % 3 - 1 : 0);
            positionY += (in == 2 || in == 3? rand() % 3 - 1 : 0);
          }
        }
        map[positionY][positionX] = ' ';
      }
    };

    void fillWithX()
    {
      for(int i = 0; i < y; i++)
        for(int o = 0; o < x; o++)
          map[i][o] = 'M';
    }

    friend std::ostream& operator<<(std::ostream &s,const gMap &map);
};

std::ostream& operator<<(std::ostream &s,const gMap &map)
{
  for(int i = 0; i < map.y; i++)
  {
    std::cout << std::endl;
    for(int o = 0; o < map.x; o++)
      s << map.map[i][o] << " ";
  }
}


int main()
{
  gMap map(30,30);
  map.fillWithX();
    std::cout << map;
  map.randomMapGeneration();
    std::cout << map;


}
