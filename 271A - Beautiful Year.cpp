#include <iostream>
using namespace std;

bool disctintdigit(short int N)
{
    short int A = N % 10, B = (N / 10) % 10, C = (N / 100) % 10, D = (N / 1000) % 10;
    if (A != B && A != C && A != D && B != C && B != D && C != D)
        return true;
    return false;
}

int main()
{
    short int N, pivot;
    cin >> N;
    for (int i = N + 1;; i++)
    {
        if (disctintdigit(i))
        {
            cout << i;
            break;
        }
    }
    return 0;
}