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
    TEST
    {
        int A, B, C;
        cin >> A>> B>> C;
        cout << max(0ll, 1+max(B, C)-A) << " ";
        cout << max(0ll, 1+max(A, C)-B) << " ";
        cout << max(0ll, 1+max(A, B)-C) << endl;
    }
    return 0;
}