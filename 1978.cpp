#include <iostream>
#include <cstring>

using namespace std;

int n, arr[100], primenum[1001], ans = 0;

void input()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
}

void primecheck()
{
	primenum[1] = 1;                       // 1�� �Ҽ��� �ƴ�
	for (int i = 2; i <= 100; i++)         // 1000������ �ڿ����� �־����Ƿ� 1000�� �������� 100������ ���
	{
		if (!primenum[i])
		{
			for (int j = i * 2; j <= 1000; j += i)
				primenum[j] = 1;
		}
	}
}

void solution()
{
	memset(primenum, 0, sizeof(int) * 1001);
	primecheck();
	
	for (int i = 0; i < n; i++)
		if (!primenum[arr[i]])
			ans++;

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