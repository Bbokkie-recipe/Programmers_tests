#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int len = sizes.size();
    int vermin = 0;
    int hormax = 0;
    for (int i = 0; i < len; i++)
    {
        int ver = sizes[i][0];
        int hor = sizes[i][1];
        if (hor > ver)
        {
            int temp = hor;
            hor = ver;
            ver = temp;
        }
        if (vermin < ver)vermin = ver;
        if (hormax < hor)hormax = hor;
    }
    int answer = hormax * vermin;
    return answer;
}