#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> v1;
    v1.push_back("Saikat ");
    v1.push_back("Bishal");
    for (vector<string>::iterator i = v1.begin(); i != v1.end();++i)
    {
        cout << *i;
    }
    cout << endl;
    cout << v1.at(0) << " ";
    cout << v1.back();
    return 0;
}