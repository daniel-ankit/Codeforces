#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

void solve()
{
    int N, M;
    cin >> N >> M;
    char A[N*M];
    for(int i=0; i<N*M; i++)
        cin >> A[i];
    for(int i=0; i<N*M; i++)
    {
        if(A[i]=='C' || A[i]=='M' || A[i]=='Y')
        {
            cout << "#Color";
            return;
        }
    }
    cout << "#Black&White";
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}