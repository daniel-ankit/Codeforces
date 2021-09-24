#include<iostream>
#include<vector>
using namespace std;

int main()
{
    double N, M=0, sum=0;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> M;
        sum+=M;
    }
    cout << sum/N;
    return 0;
}