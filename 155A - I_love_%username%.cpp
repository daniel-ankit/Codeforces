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
    int N, count=0;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++)
        cin >> A[i];
    if(N!=1)
    {
        int H = A[0], L = A[0];
        for(int i=1; i<N; i++)
        {
            if(A[i]>L && A[i]<H)
            continue;
            else if(A[i]<L)
            {
                L=A[i];
                count++;
            }
            else if(A[i]>H)
            {
                H=A[i];
                count++;
            }
        }
    }
    cout << count;
}

int32_t main()
{
    Radhe Krishna
    solve();
    return 0;
}