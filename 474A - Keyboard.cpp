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
    char C;
    cin >> C;
    string A[3] = {"qwertyuiop",  "asdfghjkl;", "zxcvbnm,./"}, S;
    cin >> S;
    if(C=='R')
    {
        for(int i=0; i<S.length(); i++)
        {
            for(int j=0; j<10; j++)
            {
                for(int k=0; k<3; k++)
                {
                if(S[i]==A[k][j])
                    cout << A[k][j-1];
                }
            }
        }
    }
    else
    {
        for(int i=0; i<S.length(); i++)
        {
            for(int j=0; j<10; j++)
            {
                for(int k=0; k<3; k++)
                {
                if(S[i]==A[k][j])
                    cout << A[k][j+1];
                }
            }
        }
    }
    return 0;
}