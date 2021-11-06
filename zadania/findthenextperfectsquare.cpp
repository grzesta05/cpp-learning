#include <iostream>
#include <string>
#include <math.h>
long int findNextSquare(double sq) {
  return((int)(sqrt(sq) *10)% 10 != 0 ? -1 : (sqrt(sq)+1)*(sqrt(sq)+1));
}
 int main()
 {
   std::cout<<findNextSquare(144);
 }
