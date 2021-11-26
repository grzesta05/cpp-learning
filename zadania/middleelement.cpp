#include <iostream>

int middle(int *a,int n)
{
  int sum = 0;
  for(int i = 0; i < n; i++)
  {
    sum+=a[i];
  }

  int l=0;
  for(int i = 0; i < n; i++)
  {
    l += a[i];
    if(l-a[i] == (sum-a[i])/2)
      return i;
  }
  return -1;
}
int main()
{
  int *n = new int[8] {18,1,1,1,2,5,5,6};
  std::cout << middle(n, 8);
}
