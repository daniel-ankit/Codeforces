#include<iostream>
using namespace std;

int main()
{
    int A, B, C, D, N, count=0;
    cin >> A >> B >> C >> D >> N;
    for(int i=1; i<=N; i++)
    {
        if(i%A==0 || i%B==0 || i%C==0 || i%D==0)
        continue;
        else count++;
    }
    cout << N - count;
    return 0;
}