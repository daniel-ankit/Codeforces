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
#define LONGINT << fixed << setprecision(0)
#define FOR(i, n) for(long long i=0; i<n; i++)
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int32_t main()
{
    Radhe Krishna
    int N, M, num=0;
    cin >> N >> M;
    int A[N], Q[M];
    FOR(i, N)
        cin >> A[i];
    FOR(i, M)
        cin >> Q[i];
    set <int> B;
    int R[N];
    for(int i=N-1; i>=0; --i)
    {
        B.insert(A[i]);
        R[i] = B.size();
    }
    for(int i=0; i<M; i++)
        cout << R[Q[i]-1] << endl;
    return 0;
}