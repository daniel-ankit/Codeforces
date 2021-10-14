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
    int N, L=0;
    cin >> N;
    string S;
    cin >> S;
    bool PASS = true;
    FOR(i, N)
        if(S[i]>='a' && S[i]<='z') S[i] = S[i]-32;
    SORT(S);
    FOR(i, N-1)
    {
        if(S[i+1]-S[i]>=2)
        {
            PASS = false;
            break;
        }
        else if(S[i+1]-S[i]==1)
            L++;
    }
    (PASS && L==25)?(cout << "YES"): (cout << "NO");
    return 0;
}