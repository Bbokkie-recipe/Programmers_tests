using namespace std;

long long solution(int price, int money, int count)
{
    long long multPrice = 0;
    for (int i = 1; i < count + 1; i++)
    {
        multPrice += (price * i);
    }
    if (money > multPrice || money == multPrice)return 0;
    else return (multPrice - money);
}