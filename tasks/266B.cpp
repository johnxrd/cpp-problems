//https://codeforces.com/problemset/problem/266/B

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    string a = s;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                a[j] = 'G';
                a[j + 1] = 'B';
            }
        }
        s = a;
    }
    cout << s << endl;
    return 0;
}