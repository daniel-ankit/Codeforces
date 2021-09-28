#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    int A[4] ={0}, cal=0;
    for(int i=0; i<4; i++)
        cin >> A[i];
    string S;
    cin >> S;
    for(int j=0; j<S.length(); j++)
    {
        if(S[j]=='1') cal+=A[0];
        else if(S[j]=='2') cal+=A[1];
        else if(S[j]=='3') cal+=A[2];
        else cal+=A[3];
    }
    cout << cal;
    return 0;
}