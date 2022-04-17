#include <iostream>
#include <algorithm>

using namespace std;

int n, a[100], b[100], ans = 0;

void input()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
		cin >> b[i];
}

void solution()
{
	sort(a, a + n);
	sort(b, b + n, greater<int>());
	
	for (int i = 0; i < n; i++)
		ans += a[i] * b[i];

	cout << ans;
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