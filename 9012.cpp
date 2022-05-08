#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	int n;
	string line;
	cin >> n;
	while (n--)
	{
		cin >> line;

		int ans = 1;
		stack<char> st;

		for (int i = 0; i < line.length(); i++)
		{
			if (line[i] == '(')
			{
				st.push(line[i]);
				continue;
			}

			if (line[i] == ')')
			{
				if (st.empty())
				{
					ans = 0;
					break;
				}

				else
					st.pop();
			}
		}

		if (st.size())           // ( �� �׿��ִٸ�
			cout << "NO\n";

		else                     // Ż�� ���� Ȯ��
			ans ? cout << "YES\n" : cout << "NO\n";
	}
	return 0;
}