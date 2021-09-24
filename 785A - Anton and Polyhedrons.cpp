#include<iostream>
using namespace std;

int main()
{
    int N, sum=0;
    cin >>N;
    string A;
    for(int i=0; i<N; i++)
    {
        cin >> A;
        if(A[0]=='T')
            sum+=4;
        else if(A[0]=='C')
            sum+=6;
        else if(A[0]=='O')
            sum+=8;
        else if(A[0]=='D')
            sum+=12;
        else sum+=20;
    }
    cout << sum;
    return 0;
}