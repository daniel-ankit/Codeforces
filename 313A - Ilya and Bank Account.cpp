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
    int N;
    cin >> N;
    if(N>=0) cout << N;
    else
    {
        string S1=to_string(N), S2=to_string(N);
        S1 = S1.substr(0, S1.size()-1);
        S2 = S2.substr(0, S2.size()-2) + S2[S2.size()-1];
        int N1 = stoll(S1), N2= stoll(S2);
        cout << max(N1, N2);
    }
    return 0;
}