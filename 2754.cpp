#include <iostream>

using namespace std;

int main(void)
{
	cout << fixed;
	cout.precision(1);

	double score = 0;

	string grade;
	cin >> grade;

	score += 'E' - grade[0];

	if (grade[1] == '+')
		score += 0.3;
	else if (grade[1] == '-')
		score -= 0.3;

	grade != "F" ? cout << score : cout << 0.0;

	return 0;
}