#include <iostream>
#include <queue>

using namespace std;

int n;
queue<int> q;

void input()
{
	cin >> n;
}

void solution()
{
	for (int i = 1; i <= n; i++)
		q.push(i);

	while (q.size() != 1)
	{
		cout << q.front() << ' ';
		q.pop();

		int num = q.front();
		q.pop();
		q.push(num);
	}

	cout << q.front();
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