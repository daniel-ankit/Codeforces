#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    int N, M;
    cin >> N >> M;
    if(max(M,N)==6) cout << "1/6";
    else if(max(M, N)==5) cout << "1/3";
    else if(max(M,N)==4) cout << "1/2";
    else if(max(M, N)==3) cout << "2/3";
    else if(max(M, N)==2) cout << "5/6";
    else cout << "1/1";
    cout << endl;
    return 0;
}