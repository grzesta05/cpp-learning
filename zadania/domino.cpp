#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fill(short **&tab, int n)
{
  for(int i = 0; i < 2; i++)
  {
    for(int j = 0; j < n; j++)
    {
      tab[i][j] = 0;
    }
  }
}

void out( short **&tab, int n)
{
  for(int i = 0; i < 2; i++)
  {
    for(int j = 0; j < n; j++)
    {
      cout<< tab[i][j] << " ";
    }
    cout<<endl;
  }
}

void deleteArray(short **&tab, int n)
{
  for(int i = 0; i < 2; i++)
  {
       delete[] tab[i];
  }
}

void napsyche()
{
  int n;
  cin >> n;
  short** tab = new short*[2];
  tab[0] = new short[n];
  tab[1] = new short[n];

  fill(tab, n);
  deleteArray(tab,n);
  out(tab,n);
}
int main()
{

}
