#include<iostream>
using namespace std;

int main()
{
    int N, M, rem=0;
    cin >> N >> M;
    int countdiff = min(N, M);
    rem = max(M,N) - min(M,N);
    int countsame = rem/2;
    cout << countdiff << " " << countsame;
    return 0;
}