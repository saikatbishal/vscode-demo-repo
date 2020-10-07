#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
/* begin() end() rbegin() rend() cbegin() crbegin() crend() */
bool f(int x,int y)
{
  return x > y;
}
int main()
{
  vector<int> s = {11, 2, 3, 14, 51, 6};
  cout << s[1]<<" "<<s[3]<<endl;
  sort(s.begin(), s.end());//O(N logN)
  bool present = binary_search(s.begin(), s.end(), 3);
  cout << present;
  present = binary_search(s.begin(), s.end(), 33);
  cout << endl
      << present;
  s.push_back(100);
  cout << endl
      << binary_search(s.begin(), s.end(), 100) << endl;
  
  s.push_back(100); 
  s.push_back(100); 
  s.push_back(100); 
  s.push_back(100); 
 // s.push_back(100);
  s.push_back(132);
  vector<int>::iterator it = lower_bound(s.begin(), s.end(), 100);
  vector<int>::iterator it2 = upper_bound(s.begin(), s.end(), 100);
  cout << *it << " " << *it2 << endl;
  cout << it2 - it << endl;
  sort(s.begin(), s.end(), f);
  vector<int>::iterator it3;
  for (it3 = s.begin(); it3 != s.end(); ++it3)
{
  cout << *it3 << " ";
}
}