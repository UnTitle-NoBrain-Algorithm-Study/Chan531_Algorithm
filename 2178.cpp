#include <iostream>
#include <queue>

using namespace std;

int n, m, dir[4][2] = { {-1, 0}, {0, 1}, {1, 0},{0, -1} };
char map[101][101];

struct node {
	int y, x, dis;
};

void input()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> map[i][j];
}

int solution()
{
	queue<node> q;
	q.push({ 1, 1, 1 });
	map[1][1] = '0';

	while (!q.empty())
	{
		int cury = q.front().y;
		int curx = q.front().x;
		int dis = q.front().dis;
		q.pop();

		if (cury == n && curx == m)
			return dis;

		for (int i = 0; i < 4; i++)
		{
			int nexty = cury + dir[i][0];
			int nextx = curx + dir[i][1];

			if (nexty < 1 || nexty > n || nextx < 1 || nextx > m || map[nexty][nextx] == '0')
				continue;

			q.push({ nexty, nextx, dis + 1 });
			map[nexty][nextx] = '0';
		}
	}
}

void solve()
{
	input();
	cout << solution();
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}