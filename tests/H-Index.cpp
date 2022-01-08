#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool func(vector<int> vec, int i)
{
    int citation = 0;
    for (int j = 0; j < vec.size(); j++)
    {
        if (vec[j] >= i)
        {
            citation++;
        }
        if (citation >= i)
        {
            return true;
        }
    }

    return false;
}

int solution(vector<int> citations) {

    int tmax = *max_element(citations.begin(), citations.end());

    vector<int> answertarget;

    for (int i = 0; i < tmax; i++)
    {
        bool temp1 = func(citations, i);
        if (temp1)answertarget.push_back(i);
        else
        {
            break;
        }
    }
    if (answertarget.size() < 1) return 0;
    int answer = *max_element(answertarget.begin(), answertarget.end());
    return answer;

}