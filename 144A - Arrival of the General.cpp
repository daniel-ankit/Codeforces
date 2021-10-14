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
    int N, num=0;
    cin >> N;
    vector <int> V;
    FOR(i, N)
    {
        cin >> num;
        V.PB(num);
    }
    int MAX = *max_element(V.begin(), V.end()), index_MAX=0;
    int MIN = *min_element(V.begin(), V.end()), index_MIN=0;
    for(int i=0; i<N; i++)
    {
        if(V[i]==MAX)
        {
            index_MAX = i+1;
            break;
        }
    }
    for(int i=N-1; i>=0; i--)
    {
        if(V[i]==MIN)
        {
            index_MIN = i+1;
            break;
        }
    }
    if(index_MAX > index_MIN)
    cout << index_MAX + (N-index_MIN)-2;
    else cout << index_MAX + (N-index_MIN)-1;
    return 0;
}