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
    int N;
    cin >> N;
    int A[N];
    FOR(i, N)
        cin >> A[i];
    sort(A, A+N);
    FOR(i, N-1)
    {
        if((A[i+1]-A[i])%2==1)
        {
            cout << "NO" <<  endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    Radhe Krishna
    TEST
    solve();
    return 0;
}