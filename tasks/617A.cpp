//https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int n = 0;
    int p = 0;

    while (p != x)
    {
        if (x - p >= 5)
        {
            p += 5;
        }
        else if (x - p >= 4)
        {
            p += 4;
        }
        else if (x - p >= 3)
        {
            p += 3;
        }
        else if (x - p >= 2)
        {
            p += 2;
        }
        else
        {
            p += 1;
        }
        n++;
    }

    cout << n;

    return 0;
}