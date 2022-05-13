#include <iostream>
#include <string>
#include <stack>

using namespace std;

void solve()
{
	string str;

	while (getline(cin, str))
	{
		if (str == ".")
			break;

		stack<char> st;
		int check = 1;

		for (int i = 0; i < str.length(); i++)
		{
			if (isalpha(str[i]) || isspace(str[i]))
				continue;

			if (str[i] == '(' || str[i] == '[')
			{
				st.push(str[i]);
				continue;
			}

			if (str[i] == ')')
			{
				if (!st.empty() && st.top() == '(')
				{
					st.pop();
					continue;
				}

				else
				{
					check = 0;
					break;
				}
			}

			if (str[i] == ']')
			{
				if (!st.empty() && st.top() == '[')
				{
					st.pop();
					continue;
				}

				else
				{
					check = 0;
					break;
				}
			}
		}

		// "((((" 같은 경우 stack에 여전히 남아있음
		if (!check || st.size())
			cout << "no\n";

		else
			cout << "yes\n";
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}