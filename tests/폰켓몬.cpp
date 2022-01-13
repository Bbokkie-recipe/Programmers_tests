#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    vector<int>answers;
    sort(nums.begin(), nums.end());
    int amount = (int)(nums.size() / 2);
    answers.push_back(nums[0]);
    int count = 0;
    for (int i = 1; i < nums.size() + 1; i++)
    {
        if (answers.size() == amount)break;
        if (nums[i - 1] == answers[count])continue;
        count++;
        answers.push_back(nums[i - 1]);
    }
    int answer = answers.size();
    return answer;
}