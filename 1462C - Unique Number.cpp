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
    TEST
    {
        int N;
        cin >> N;
        if(N>45) cout << -1 << endl;
        else
        {
            vector <int> V;
            for(int i=9; i>=1; i--)
            {
                if(N>i)
                V.PB(i);
                else
                {V.PB(N); break;}
                N-=i;
            }
            reverse(V.begin(), V.end());
            for(auto X:V)
                cout << X;
            cout << endl;
        }
    }
    return 0;
}