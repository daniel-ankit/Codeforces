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
#define REVERSE(Series) sort(Series.begin(), Series.end());
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int32_t main()
{
    int N, num=0;
    cin >> N;
    vector <int> V;
    for(int i=0; i<N; i++)
    {
        cin >> num;
        V.PB(num);
    }
    num=0;
    SORT(V);
    int T1=accumulate(V.begin(), V.end(), 0), T2=0;
    while(T1>=T2)
    {
        T2+=V.back();
        T1-=V.back();
        V.PP();
        num++;
    }
    cout << num;
    return 0;
}