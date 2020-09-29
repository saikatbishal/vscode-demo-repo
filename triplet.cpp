#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;
    int s = 1000;
    bool flag;
    for (int a = 1; a < s / 3;a++)
    {
        for (int b = a; b = s / 2;b++)
        {
            c = 1000 - a - b;
            //int d = c * c;
            if(a*a + b*b == c*c)
            {
                flag = true;
                break;
            }
        }
    }
    cout << a << " " << b << " " << c;
    cout << "\n"
         << a * b * c;
    return 0;
}