#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    TEST
    {
    int N,M;
    cin >> N>>M;
    if(N==1) cout << 0;
    else if(N==2) cout << M;
    else cout << 2*M;
    cout << endl;
    }
    return 0;
}