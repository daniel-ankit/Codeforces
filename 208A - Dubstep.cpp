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
    bool pass = true;
    string S;
    cin >> S;
    FOR(i, S.length())
    {
        if(S[i]=='W' && S[i+1]=='U' && S[i+2]=='B' && S[i+3]=='W' && S[i+4]=='U' && S[i+5]=='B' && S[i+6]=='W' && S[i+7]=='U' && S[i+8]=='B')
        {
            i+=8;
            if(!pass)
                cout<< " ";
            continue;
        }
        if(S[i]=='W' && S[i+1]=='U' && S[i+2]=='B' && S[i+3]=='W' && S[i+4]=='U' && S[i+5]=='B')
        {
            i+=5;
            if(!pass)
                cout<< " ";
            continue;
        }
        else if(S[i]=='W' && S[i+1]=='U' && S[i+2]=='B')
        {
            i+=2;
            if(!pass)
                cout<< " ";
            continue;
        }
        else
        {
            pass=false;
            cout << S[i];
        }
    }
    return 0;
}