#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
bool PrimeCheck(int num)
{
    int temp = (int)sqrt(num);
    for (int i = 2; i <= temp; i++)
    {
        if (num % i == 0) return false;
    }
    return true;
}

int solution(vector<int> n) {
    sort(n.begin(), n.end());
    vector <int> numbee;
    int temp = n.size();
    int cnt = 0;
    for (int i = 0; i < n.size() - 2; i++)
    {
        for (int j = 1; j < n.size() - 1; j++)
        {
            if (i == j)continue;
            for (int k = 2; k < n.size(); k++)
            {
                if (i == j || i == k || j == k || j > k || i > j || i > k)continue;
                int numtemp = n[i] + n[j] + n[k];
                numbee.push_back(numtemp);
            }
        }
    }
    for (auto i : numbee)
    {
        cout << i << ' ';
        bool test = PrimeCheck(i);
        if (test) cnt++;
    }
    return cnt;
}