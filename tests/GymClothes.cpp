#include <iostream>
#include <string>
#include <vector>


using namespace std;
//��ü�л���, �������� �л��� ��ȣ, ���� ü���� �л��� ��ȣ
            /*lost�� �ִ� �л��� reserve�� ���� �� ����*/
            /*���� ��� ������ �� ����*/
int main()
{
    int n = 5; 
    vector<int> lost = { 2,4 };
    vector<int> reserve = { 1,3,5 };
    vector<int>student(n);//n�� ��ŭ 0���� �ʱ�ȭ
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