#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ans;
    while (n)
    {
        ans.push_back(n % 3);
        n /= 3;
    }
    int k = 1;
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        answer += (ans[i] * k);
        k = k * 3;
    }
    return answer;
}