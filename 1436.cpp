#include <iostream>

using namespace std;

int n;

void input()
{
	cin >> n;
}

void solution()
{
	int cnt = 0;

	for (int i = 666; ; i++)
	{
		int num = i;

		while (num >= 666)
		{
			num -= 666;

			if ((num % 1000) == 0)
			{
				cnt++;
				break;
			}

			num += 666;
			num /= 10;
		}

		if (cnt == n)
		{
			cout << i;
			break;
		}
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