#include <string>
#include <vector>

using namespace std;

bool solution(int y) {
    int x = y;
    vector<int> ha;
    int temp1 = 0;
    while (x)
    {
        temp1 = (x % 10);
        ha.push_back(temp1);
        x = x / 10;
    }
    int temp = 0;
    for (int i = 0; i < ha.size(); i++)
    {
        temp += ha[i];
    }

    if (y % temp == 0)return true;
    else return false;
}