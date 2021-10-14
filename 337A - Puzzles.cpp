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
    int A, B, num=0;
    cin >> A >> B;
    vector <int> BIG , D;
    BIG.PB(0);
    for(int i=1; i<=B; i++)
    {
        cin >> num;
        BIG.PB(num);
    }
    SORT(BIG);
    for(int i=1; i<B-A+2; i++)
        D.PB(BIG[i+A-1]-BIG[i]);
    cout << *min_element(D.begin(), D.end());
    return 0;
}