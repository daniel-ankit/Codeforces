#include<bits/stdc++.h>
#include<algorithm>
#include<bitset>
#include<cstdlib>
#include<iomanip>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define int long long 
#define PB push_back
#define PP pop_back
#define MP make_pair
#define MOD(n) n%1000000007
#define VLL vector <long long>
#define FOR(i, n) for(long long i=0; i<n; i++)
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

void solve()
{
    int N, nT=0, nM=0;
    cin >> N;
    string S;
    cin >> S;
    for(int i=0; i<N; i++)
    {
        (S[i]=='T') ? (nT++) : (nM++);
        if (nM>nT)
        {
            cout << "NO" << endl;
            return;
        }
    }
    nT=0, nM=0;
    reverse(S.begin(), S.end());
    for(int i=0; i<N; i++)
    {
        (S[i]=='T') ? (nT++) : (nM++);
        if (nM>nT)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if(2*nM==nT)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int32_t main()
{
    Radhe Krishna
    TEST solve();
    return 0;
}