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
    float A, B, C, D;
    cin >> A >> B >> C >> D;
    A = max(3*A/10, A-A/250*C);
    B = max(3*B/10, B-B/250*D);
    if(A==B) cout << "Tie";
    else (A>B) ? (cout << "Misha") : (cout << "Vasya");
    cout << endl;
    return 0;
}