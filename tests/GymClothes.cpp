#include <iostream>
#include <string>
#include <vector>


using namespace std;
//전체학생수, 도난당한 학생들 번호, 여벌 체육복 학생들 번호
            /*lost에 있는 학생이 reserve에 있을 수 있음*/
            /*위의 경우 빌려줄 수 없음*/
int main()
{
    int n = 5; 
    vector<int> lost = { 2,4 };
    vector<int> reserve = { 1,3,5 };
    vector<int>student(n);//n개 만큼 0으로 초기화
    for (int j = 0; j < lost.size(); j++)
    {
        student[lost[j] - 1] = -1;
    }
    for (int j = 0; j < reserve.size(); j++)
    {
        student[reserve[j] - 1]++;
    }
    for (int j = 0; j < student.size() - 1; j++)
    {
        if (student[j] > 0)
        {
            student[j] = student[j] - 1;
            if (student[j + 1] == -1)
            {
                student[j + 1] = student[j + 1] + 1;
            }
        }
        if (student[j] < 0)
        {
            if (student[j + 1] == 1)
            {
                student[j + 1] = student[j + 1] - 1;
                student[j] = 0;
            }
        }
    }
    int answer = 0;
    for (int j = 0; j < student.size(); j++)
    {
        if (student[j] >= 0)
        {
            answer++;
        }
    }
    cout << answer;
}