#include <iostream>

using namespace std;

int n, num, arr[2000001];

void input()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arr[num + 1000000] = 1;
	}
}

void solution()
{
	for (int i = 0; i <= 2000000; i++)
	{
		if (arr[i] == 1)
			cout << i - 1000000 << '\n';
	}
}

void solve()
{
	input();
	solution();
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}