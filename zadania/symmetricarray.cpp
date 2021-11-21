#include <bits/stdc++.h>

bool checkIfSymmetric(int n[],const int &l)
{
  if(l % 2 != 0)
    return 0;
  std::sort(n, n+l);
  for(int i = 0; i < l; i++)
  {

  }
}

int main()
{
  const int i = 8;
  const int n[i] = {1,1,1,2,3,3,1,2};

  std::cout<< checkIfSymmetric(n, i);

}
