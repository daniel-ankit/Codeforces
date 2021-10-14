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

int32_t main()
{
    Radhe Krishna
    unsigned int N, Q, count=1;
    cin >> N >> Q;
    int A[Q];
    FOR(i, Q)
    cin >> A[i];
    for(int i=0; i<Q-1; i++)
    {
        if(A[i]>A[i+1])
        count++;
    }
    cout << (count-1)*N+A[Q-1]-1;
    return 0;
}