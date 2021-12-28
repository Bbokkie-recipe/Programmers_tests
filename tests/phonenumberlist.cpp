#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
	sort(phone_book.begin(), phone_book.end());

	bool answer = true;
	for (int i = 0; i < phone_book.size() - 1; i++)
	{
		string temp2 = "";
		string temp3 = "";
		temp2 += phone_book[i];
		temp3 += phone_book[i + 1];
		int temp_length2 = temp2.size();
		string sub = temp3.substr(0, temp_length2);
		if (phone_book[i] == sub)answer = false;
	}

	return answer;
}