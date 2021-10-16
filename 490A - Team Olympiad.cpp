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
#define MP(a, b) make_pair(a, b)
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
    int N, num=0;
    cin >> N;
    deque< pair <int, int>> P, M, PE;
    for(int i=1; i<=N; i++)
    {
        cin >> num;
        if(num==1) P.PB(MP(num, i));
        else if(num==2) M.PB(MP(num, i));
        else PE.PB(MP(num, i));
    }
    if(PE.size()==0 || P.size()==0 || M.size()==0)
        cout << 0 << endl;
    else
    {
        cout << min(PE.size(), min(P.size(), M.size())) << endl;
        for(int i=0; i<min(PE.size(), min(P.size(), M.size())); i++)
        cout << P[i].second << " " << M[i].second << " " << PE[i].second << endl;
    }
    return 0;
}