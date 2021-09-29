#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

void solve()
{
        int N;
        cin >>N;
        string S;
        cin >> S;
        for(int i=0; i< S.length()-1; i++)
        {
            if((S[i]=='a' && S[i+1]=='b') || (S[i]=='b' && S[i+1]=='a'))
            {
                cout << i+1 << " " << i+2 << endl;
                return;
            }
        }
        cout << "-1 -1" <<endl;
        return;
}

int main()
{
    TEST
    solve();
    return 0;
}