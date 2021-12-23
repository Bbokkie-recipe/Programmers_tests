#include <iostream>
#include <string>
using namespace std;

int main()
{
	char startAlphabet = 'A';
	string name = "JDAZZ";
	int namePiece[20];
	bool isEyesore = false;
	int EyesorePos = 0;
	//좌우1 name 길이가 무조건 A가 있는 곳 가까이 간다.
	//좌우2 A 가는 길이가 같으면 아무데나 간다.
	int left = 0;
	int right = 0;
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == 'Z')name[i] = 'B';
		if (name[i] == 'Y')name[i] = 'C';
		if (name[i] == 'X')name[i] = 'D';
		if (name[i] == 'W')name[i] = 'E';
		if (name[i] == 'V')name[i] = 'F';
		if (name[i] == 'U')name[i] = 'G';
		if (name[i] == 'T')name[i] = 'H';
		if (name[i] == 'S')name[i] = 'I';
		if (name[i] == 'R')name[i] = 'J';
		if (name[i] == 'Q')name[i] = 'K';
		if (name[i] == 'P')name[i] = 'L';
		if (name[i] == 'O')name[i] = 'M';
		if (startAlphabet == name[i])
		{
			isEyesore = true;
			EyesorePos = i;
			cout << EyesorePos << endl; //A가 있는 인덱스
		}
	}
	//right쪽으로 얼마나 가야 A가 있는지
	for (int i1 = 0; i1 < name.size(); i1++)
	{
		if (startAlphabet == name[i1])
		{
			right = i1;
		}
	}
	//left쪽으로 얼마나 가야 A가 있는지
	for (int i2 = name.size()-1; i2 >=0; i2--)
	{
		left++;
		if (startAlphabet == name[i2])
		{
			break;
		}
	}
	for (int i = 0; i < name.size(); i++)
	{
		namePiece[i] = name[i];
	}
	int answer = 0;
	for (int i = 0; i < name.size(); i++)
	{
		cout << name[i] << endl;
		if (name[i] != 'A') answer = (char)name[i] - startAlphabet;
		cout << answer << endl;
	}
	cout << answer;
	//로직 추가 : 거꾸로 가기
	//if(left<right)
}