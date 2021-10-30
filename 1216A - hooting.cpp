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
    int N, num=0;
    cin >> N;
    vector<pair<int, int>> V;
    for(int i=1; i<=N; i++)
    {
        cin >> num;
        V.PB(MP(num, i));
    }
    SORT(V);
    num=0;
    reverse(V.begin(), V.end());
    for(int i=0; i<N; i++)
        num+=(V[i].first*i+1);
    cout << num << endl;
    for(int i=0; i<N; i++)
        cout << V[i].second << " ";
    return 0;
}