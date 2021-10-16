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
        int N, num=0, ans=0;
        cin >> N;
        string S;
        cin >> S;
        for(int i=0; i<N; i++)
        {
            if(S[i]=='(')
            {
                num++;
                continue;
            }
            else num--;
            if(num<0)
            {
                ans++;
                num=0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}