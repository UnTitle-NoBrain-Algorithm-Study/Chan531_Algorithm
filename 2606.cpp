#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, a, b;
vector<int> comp[101];
// comp -> a와의 연결목록
bool visited[101];

void input()
{
	cin >> n >> m;

	while (m--)
	{
		cin >> a >> b;
		comp[a].push_back(b);
		comp[b].push_back(a);
	}
}

void solution()
{
	int cnt = -1;
	queue<int> q;
	q.push(1);
	visited[1] = 1;

	while (!q.empty())
	{
		int pos = q.front();
		q.pop();

		cnt++;

		for (int i = 0; i < comp[pos].size(); i++)
		{
			if (!visited[comp[pos][i]])
			{
				visited[comp[pos][i]] = 1;
				q.push(comp[pos][i]);
			}
		}
	}

	cout << cnt;
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