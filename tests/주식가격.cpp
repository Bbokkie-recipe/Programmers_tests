#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for (int i = 0; i < prices.size(); i++) 
    {
        int keepCnt = 0;
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[i] > prices[j])
            {
                keepCnt++;
                break;
            }
            if (i != prices.size() - 1 && prices[i] <= prices[j])
            {
                keepCnt++;
            }
        }
        answer.push_back(keepCnt);
    }
    return answer;
}