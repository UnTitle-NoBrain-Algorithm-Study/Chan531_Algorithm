#include <iostream>
#include <algorithm>
#define p pair<int, int>

using namespace std;

int n, dp[100];
p arr[100];

void input()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
}

void solution()
{
	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		dp[i] = 1;

	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
			if (arr[i].second > arr[j].second)
				dp[i] = max(dp[i], dp[j] + 1);

	cout << n - *max_element(dp, dp + n);
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