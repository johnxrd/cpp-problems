//https://codeforces.com/problemset/problem/746/A

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int count = 0;
    
    while (a >= 0 && b >= 0 && c >= 0) {
        if (a >= 1 && b >= 2 && c >= 4) {
            a -= 1;
            b -= 2;
            c -= 4;
            count += 7;
        } else {
            break;
        }
    }
    
    cout << count;
    
    return 0;
}