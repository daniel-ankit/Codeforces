#include <iostream>
using namespace std;

int main()
{
    long long int K, N, res;
    cin >> N >> K;
    if (N % 2 == 0)
    {
        if (K <= N/2) res = 2*K-1;
        else res = (K-N/2)*2;
    }
    else
    {
        if (K <= (N+1)/2) res = 2*K-1;
        else res = (K-(N+1)/2)*2;
    }
    cout << res;
    return 0;
}