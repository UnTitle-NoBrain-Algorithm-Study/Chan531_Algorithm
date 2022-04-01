#include <string>

using namespace std;

int solution(string s) {
    string answer = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            answer += s[i];
            continue;
        }

        if (s[i] == 'z')
        {
            answer += '0';
            i += 3;
            continue;
        }

        if (s[i] == 'o')
        {
            answer += '1';
            i += 2;
            continue;
        }

        if (s[i] == 't')
        {
            if (s[i + 1] == 'w')
            {
                answer += '2';
                i += 2;
            }

            else
            {
                answer += '3';
                i += 4;
            }

            continue;
        }

        if (s[i] == 'f')
        {
            if (s[i + 1] == 'o')
            {
                answer += '4';
                i += 3;
            }

            else
            {
                answer += '5';
                i += 3;
            }

            continue;
        }

        if (s[i] == 's')
        {
            if (s[i + 1] == 'i')
            {
                answer += '6';
                i += 2;
            }

            else
            {
                answer += '7';
                i += 4;
            }

            continue;
        }

        if (s[i] == 'e')
        {
            answer += '8';
            i += 4;
            continue;
        }

        if (s[i] == 'n')
        {
            answer += '9';
            i += 3;
            continue;
        }
    }
    return stoi(answer);
}