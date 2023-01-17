//https://codeforces.com/problemset/problem/1676/A

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		string ticket;
		cin >> ticket;

		int sum1 = 0;
		int sum2 = 0;

		for (int j = 0; j < 3; j++)
		{
			sum1 += ticket[j] - '0';
			sum2 += ticket[ticket.length() - j - 1] - '0';
		}

		if (sum1 == sum2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}