#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#define p pair<int, int>

using namespace std;

int n, arr[500000], num[8001];           // num -> ÃÖºó°ª ÆÄ¾Ç¿ë
vector<p> mode;

bool cmp (p a, p b)
{
	if (a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}

void input()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		num[arr[i] + 4000]++;
	}
}

void Mean()            // »ê¼ú Æò±Õ
{
	double sum = accumulate(arr, arr + n, 0);
	sum = round(sum / n);
	sum == -0 ? cout << 0 << '\n' : cout << sum << '\n';
}

void Median()          // Áß¾Ó°ª
{
	cout << arr[n / 2] << '\n';
}

void Mode()            // ÃÖºó°ª
{
	for (int i = 0; i < 8001; i++)
		if (num[i])
			mode.push_back({ num[i], i - 4000 });

	sort(mode.begin(), mode.end(), cmp);

	// ¿¹¿ÜÃ³¸®

	if (mode.size() == 1 || (mode[0].first != mode[1].first))
	{
		cout << mode[0].second << '\n';
		return;
	}

	cout << mode[1].second << '\n';
}

void Range()           // ¹üÀ§
{
	cout << abs(arr[0] - arr[n - 1]);
}

void solution()
{
	sort(arr, arr + n);

	Mean();
	Median();
	Mode();
	Range();
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