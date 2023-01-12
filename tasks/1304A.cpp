//https://codeforces.com/contest/1304/problem/A

#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		int dist = y - x;
		if (dist % (a + b) == 0) {
			cout << dist / (a + b) << endl;
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}
