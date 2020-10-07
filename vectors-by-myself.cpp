#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool f(int x,int y)
{
    return x > y;
}
bool asc(int x, int y)
{
    return x < y;
}
int main()
{
    vector<int> a = {1, 2};
    a.push_back(12);
    a.push_back(4);
    a.push_back(3);
    a.push_back(67);
    a.push_back(67);
    a.push_back(67);
    a.push_back(67);
    a.push_back(67);
    a.push_back(67);    
    a.push_back(87);
    a.push_back(62);
    a.push_back(98);
    a.push_back(33);
    auto it = lower_bound(a.begin(), a.end(), 67);
    auto it2 = upper_bound(a.begin(), a.end(), 67);
    cout << *it << " " << *it2;
    cout << endl << it2 - it << endl;
    for (int x : a)
    {
        cout << x << " ";
    }
    cout << "\n";
    sort(a.begin(), a.end(), f);
    for(int y : a)
    {
        cout << y<<" ";
    }
    cout << "\n";
    for (int &x : a)
    {
        ++x;
        cout << x << " ";
    }
    sort(a.begin(), a.end());
    cout << endl;
    for(int n:a)
    {
        cout << n << "~";
    }
}

