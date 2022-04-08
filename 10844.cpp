#include <iostream>
#include <numeric>
#define mod 1000000000

using namespace std;

int n;
long long stairnum[101][10];        // 자릿수, 끝 수

void input()
{
	cin >> n;
}

void setdp()
{
	for (int i = 1; i < 10; i++)
		stairnum[1][i] = 1;
}

void solution()
{
	setdp();
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			// 0과 9는 1과 8 다음에만 올 수 있음
			if (j == 0)
			{
				stairnum[i][j] = stairnum[i - 1][j + 1];
				continue;
			}

			if (j == 9)
			{
				stairnum[i][j] = stairnum[i - 1][j - 1];
				continue;
			}

			stairnum[i][j] = (stairnum[i - 1][j - 1] + stairnum[i - 1][j + 1]) % mod;
		}
	}
	cout << accumulate(stairnum[n], stairnum[n] + 10, 0LL) % mod;
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