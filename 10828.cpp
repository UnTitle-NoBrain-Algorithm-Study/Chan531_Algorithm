#include <iostream>
#include <vector>

using namespace std;

int n, num;
string com;

vector<int> stack;

void push()
{
	cin >> num;
	stack.push_back(num);
}

void pop()
{
	if (stack.size())
	{
		cout << stack.back() << '\n';
		stack.pop_back();
		return;
	}

	cout << -1 << '\n';
}

void size()
{
	cout << stack.size() << '\n';
}

void empty()
{
	stack.size() ? cout << 0 << '\n' : cout << 1 << '\n';
}

void top()
{
	stack.size() ? cout << stack.back() << '\n' : cout << -1 << '\n';
}

void command(string com)
{
	if (com == "push")
	{
		push();
		return;
	}

	if (com == "pop")
	{
		pop();
		return;
	}

	if (com == "size")
	{
		size();
		return;
	}

	if (com == "empty")
	{
		empty();
		return;
	}

	if (com == "top")
	{
		top();
		return;
	}
}

void solve()
{
	cin >> n;

	while (n--)
	{
		cin >> com;

		command(com);
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