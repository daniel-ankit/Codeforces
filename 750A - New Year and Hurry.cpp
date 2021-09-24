#include <iostream>
using namespace std;

int main()
{
    int N, K, sum = 0;
    cin >> N >> K;
    int time = 240 - K, timetaken=0, count = 0;
    for (int i = 1; i <= N; i++)
    {
        timetaken += (5 * i);
        if (timetaken > time)
            break;
        else
            count++;
    }
    cout << count;
    return 0;
}