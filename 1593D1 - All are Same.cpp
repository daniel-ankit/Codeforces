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

bool allsame(vector<int> V)
{
    for(int i=0; i<V.size()-1; i++)
        if(V[i]!=V[i+1]) return false;
    return true;
}

int32_t main()
{
    Radhe Krishna
    TEST
    {
        int N, num=0;
        cin >> N;
        set<int> S;
        vector<int> V, A;
        for(int i=0; i<N; i++)
        {
            cin >> num;
            V.PB(num);
        }
        if (allsame(V))
            cout << -1 << endl;
        else
        {
            int MIN = *max_element(V.begin(), V.end());
            for(int i=0; i<N; i++)
                A.PB(V[i]-MIN);
            int GCD=A[0];
            for(int i=1; i<N; i++)
                GCD = __gcd(GCD, A[i]);
            cout << abs(GCD) << endl;
        }
    }
    return 0;
}