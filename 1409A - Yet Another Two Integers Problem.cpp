#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, M, count=0;
        cin >> N >> M;
        count= max(M, N)/10 - min(M,N)/10;
        if(M%10 != N%10) count++;
        if(max(M, N)%10 < min(M,N)%10)
        count--;
        cout << count << endl;
    }
    return 0;
}