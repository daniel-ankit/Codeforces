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

void solve()
{
    string S;
    cin >> S;
    int A=0, AA=0, i, count=0;
    if(S=="0")
    {
        cout << 0 << endl;
        return;
    }
    for(i=S.size()-1; i>=0; i--)
    {
        if(S[i]=='0')
        break;
        count++;
    }
    for(i=i-1; i>0; i--)
    {
        if(S[i]=='0' || S[i]=='5')
        break;
        count++;
    }
    AA=count;
    count=0;
    for(i=S.size()-1; i>=0; i--)
    {
        if(S[i]=='5')
        break;
        count++;
    }
    for(i=i-1; i>0; i--)
    {
        if(S[i]=='2' || S[i]=='7')
        break;
        count++;
    }
    if(AA>count) AA=count;
    cout << AA << endl;
}

int32_t main()
{
    Radhe Krishna
    TEST
    solve();
    return 0;
}