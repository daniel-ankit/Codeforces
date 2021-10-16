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
    int N, M, num=0;
    cin >> N;
    int V1[N];
    for(int i=0; i<N; i++)
        cin >> V1[i];
    sort(V1, V1+N);
    cin >> M;
    while(M--)
    {
        cin >> num;
        int l=0, r=N-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(V1[m]>num)
            r=m-1;
            else
            l=m+1;
        }
        cout << r+1 << endl;
    }
    return 0;
}