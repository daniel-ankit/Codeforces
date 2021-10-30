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
#define ADD(A, B) accumulate(A, B, 0)
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL); cout.tie(NULL);

long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}

int32_t main()
{
    Radhe Krishna
    int N;
    cin >> N;
    int V[N], SUM_UNSORTED[N+1]={0}, SUM_SORTED[N+1]={0};
    for(int i=1; i<=N; i++)
    {
        cin >> V[i-1];
        SUM_UNSORTED[i] = SUM_UNSORTED[i-1]+V[i-1];
    }
    sort(V, V+N);
    for(int i=1; i<=N; i++)
        SUM_SORTED[i] = SUM_SORTED[i-1]+V[i-1];
    int Q;
    cin >> Q;
    while(Q--)
    {
        int A=0, L=0, R=0;
        cin >> A >> L >> R;
        (A==1) ? (cout << SUM_UNSORTED[R]-SUM_UNSORTED[L-1]) : (cout << SUM_SORTED[R]-SUM_SORTED[L-1]);
        cout << endl;
    }
    return 0;
}