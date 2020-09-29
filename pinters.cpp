#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cout << "Enter the number of test-cases";
  cin >> t;
  while (t--)
  {
    int n;
    cout << "Enter the size of pattern";
    cin >> n;
    for (int i = n; i > 0;i--)
    {
      for (int j = 0; j < i;j++)
      {
        cout << "*";
      }
      cout << endl;
    }
  }
  return 0;
}