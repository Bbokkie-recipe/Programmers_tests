#include <string>
#include <vector>
#include <iostream>

using namespace std;
//문제 조건 1 : 정사각형 제외하고는 가로가 더 긴 직사각형이다.
//문제 조건 2 : 브라운들이 yellow를 한겹으로 감싸는 꼴이다.

//임시 yellow를 계산해볼 때 brown값과 일치하는지 체크하는 함수
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
    //yellow 높이가 1로 끝날 때
    if ((yellow * 2) + 2 + 4 == brown)//if((yellow 위+아래)+(yellow 양 옆)+ 꼬투리 4개 ==brown)
    {
        //문제 조건 2에 따라
        height = 3; //yellow 높이가 1이면 height는 무조건 3
        width = yellow + 2;
        answer.push_back(width);
        answer.push_back(height);
    }
    else //yellow 높이가 1 초과될 때
    {
        for (int i = 2; i < yellow; i++)
        {
            int tempyellowHeight;
            int tempyellowWidth;
            if (yellow % i == 0)//나머지가 0이면 약수
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