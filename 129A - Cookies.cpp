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
    int N, nE=0, nO=0;
    cin >> N;
    int A[N];
    FOR(i, N)
    {
        cin >> A[i];
        (A[i]%2==0) ? (nE++) : (nO++);
    }
    (accumulate(A, A+N, 0)%2==0)?(cout << nE) : (cout << nO);
    return 0;
}