#include <iostream>
using namespace std;

int main()
{
    int N, count = 0;
    cin >> N;
    if (N >= 100)
    {
        count += (N / 100);
        N %= 100;
    }
    if (N >= 20)
    {
        count += (N / 20);
        N %= 20;
    }
    if (N >= 10)
    {
        count += (N / 10);
        N %= 10;
    }
    if (N >= 5)
    {
        count += (N / 5);
        N %= 5;
    }
    if(N>0)
        count += N;
    cout << count;
    return 0;
}
