#include <bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"Enter a number to check if it is prime";
  int n;
  int ctr = 0;
  cin>>n;
  for(int i = 1;i<sqrt(n);i++)
  {
    if(n%i == 0)
      ctr++;
  }
  if(ctr == 1)
    cout<<"Prime";
  else cout<<"Not prime";
  return 0;
}