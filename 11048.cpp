#include <iostream>
#include <algorithm>

using namespace std;

int n, m, map[1001][1001], dp[1002][1002];
int dir[3][2] = { {0, 1},{1,0},{1,1} };

void input()
{
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> map[i][j];
}

void solution()
{
	dp[1][1] = map[1][1];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				int ni = i + dir[k][0];
				int nj = j + dir[k][1];

				dp[ni][nj] = max(dp[ni][nj], dp[i][j] + map[ni][nj]);
			}
		}
	}

	cout << dp[n][m];
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