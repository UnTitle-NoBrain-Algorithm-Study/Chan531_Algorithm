#include <iostream>

using namespace std;

int n, a, b;

void solve()
{
	cin >> n;

	while (n--)
	{
		cin >> a >> b;
		int num = b - a;

		for (int i = 2; ; i += 2)
		{
			if (num > i)
			{
				num -= i;
				continue;
			}

			if (num > i / 2)
				cout << i << '\n';

			else
				cout << i - 1 << '\n';

			break;
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}