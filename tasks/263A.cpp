//https://codeforces.com/problemset/problem/263/A

#include <iostream>

using namespace std;

int main()
{
    int n, a[5][5], ans = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (a[i][j] == 1)
            {
                n = i;
                break;
            }
    ans += abs(2 - n);
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (a[i][j] == 1)
            {
                n = j;
                break;
            }
    ans += abs(2 - n);
    cout << ans;
    return 0;
}