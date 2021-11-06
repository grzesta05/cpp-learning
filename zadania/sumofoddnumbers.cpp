#include <iostream>
#include <string>
long long rowSumOddNumbers(unsigned n){
  int firstOfRow = 1;
  for(int i = 1; i < n; i++)
    firstOfRow += 2*i;
    auto ans = [=](long long a, unsigned n) {return (n > 1? a*n + a-1:a);};
    return ans(firstOfRow, n);
}


int main()
{
  std::cout<<rowSumOddNumbers(5);
}
