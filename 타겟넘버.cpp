#include <queue>
#include <vector>
#define p pair<int, int>

using namespace std;

int solution(vector<int> numbers, int target) {
    int ans = 0;
    queue<p> q;
    q.push({ numbers[0], 1 });
    q.push({ -numbers[0], 1 });

    while (!q.empty())
    {
        int pos = q.front().first;
        int idx = q.front().second;
        q.pop();

        if (idx == numbers.size())
        {
            if (pos == target)
                ans++;

            continue;
        }

        q.push({ pos + numbers[idx], idx + 1 });
        q.push({ pos - numbers[idx], idx + 1 });
    }
    return ans;
}