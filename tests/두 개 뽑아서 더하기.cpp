#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = 0; j < numbers.size(); j++)
        {
            if (i == j)continue;
            int t = numbers[i];
            t += numbers[j];
            result.push_back(t);
        }
    }
    sort(result.begin(), result.end());
    result.resize(unique(result.begin(), result.end()) - result.begin());
    return result;
}