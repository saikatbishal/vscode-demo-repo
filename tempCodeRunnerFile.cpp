#include <iostream>
using namespace std;
#include <vector>
/* begin() end() rbegin() rend() cbegin() crbegin() crend() */
int main()
{
  vector<int> g1;
  for (int i = 1; i < 5;i++)
  {
    g1.push_back(i);
  }
  cout << "Output of begin and end :";
  for (auto i = g1.begin(); i != g1.end() ; ++i)
  {
    cout << *i << " ";
    cout << "This is the implementation of vectors. ";
  }
}