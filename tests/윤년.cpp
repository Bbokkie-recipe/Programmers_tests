#include <string>
#include <vector>

using namespace std;
//���� = 4�⿡ �ѹ� �� 2���� 29���� ��
string solution(int a, int b) {
    string Days[] = { "THU","FRI","SAT","SUN","MON","TUE","WED" };
    int Moon[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
    int date = 0;
    for (int i = 1; i < a; i++)
    {
        date += Moon[i];
    }
    string answer = "";
    answer = Days[(date + b) % 7];
    return answer;
}