#include <string>
#include <vector>
#include <iostream>

using namespace std;
//���� ���� 1 : ���簢�� �����ϰ�� ���ΰ� �� �� ���簢���̴�.
//���� ���� 2 : ������� yellow�� �Ѱ����� ���δ� ���̴�.

//�ӽ� yellow�� ����غ� �� brown���� ��ġ�ϴ��� üũ�ϴ� �Լ�
bool Checkyellowbrown(int tempyellowHeight, int tempyellowWidth, int brown)
{
    if ((tempyellowWidth * 2) + (tempyellowHeight * 2) + 4 == brown)
    {
        return true;
    }
    else return false;
}

vector<int> solution(int brown, int yellow) {
    int height;
    int width;
    vector<int> answer;
    //yellow ���̰� 1�� ���� ��
    if ((yellow * 2) + 2 + 4 == brown)//if((yellow ��+�Ʒ�)+(yellow �� ��)+ ������ 4�� ==brown)
    {
        //���� ���� 2�� ����
        height = 3; //yellow ���̰� 1�̸� height�� ������ 3
        width = yellow + 2;
        answer.push_back(width);
        answer.push_back(height);
    }
    else //yellow ���̰� 1 �ʰ��� ��
    {
        for (int i = 2; i < yellow; i++)
        {
            int tempyellowHeight;
            int tempyellowWidth;
            if (yellow % i == 0)//�������� 0�̸� ���
            {
                tempyellowHeight = i;
                tempyellowWidth = yellow / i;
                bool isright;
                isright = Checkyellowbrown(tempyellowHeight, tempyellowWidth, brown);
                if (isright)
                {
                    height = tempyellowHeight + 2;
                    width = tempyellowWidth + 2;
                    answer.push_back(width);
                    answer.push_back(height);
                    break;
                }
                else continue;
            }
            else continue;
        }
    }
    return answer;
}