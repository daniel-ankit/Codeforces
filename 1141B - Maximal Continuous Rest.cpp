/*
┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                                               │
└───────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
*/
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
#define VII vector <int int>
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VB vector<bool>
#define LONGINT << fixed << setprecision(0)
#define FOR(i, n) for(long long i=0; i<n; i++)
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL); cout.tie(NULL);
#define ALL(X) V.begin(), V.end()
#define VIN(x,X) for(auto &x:X) cin >> x; 
#define VOUT(x,X) for(auto x:X) cout << x << " ";
#define SORT(V) sort(ALL(V))
#define REVERSE(V) reverse(ALL(V))
#define ADD(V) accumulate(ALL(V), 0)
#define PI 3.1415926535897932384626433832795

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}

void solve()
{
    int N, rest=0, maxrest=0, rest2=0;
    cin >> N;
    int A[N];
    FOR(i, N)
    cin >> A[i];
    if(A[0]==1 && A[N-1]==1)
    {
        for(int i=0; i<N-1; i++)
        {
            if(A[i]==0) break;
            rest++;
        }
        for(int i=N-1; i>0; i--)
        {
            if(A[i]==0) break;
            rest++;
        }
        for(int i=0; i<N; i++)
        {
            if(A[i]==0)
            {
                rest2=0;
                continue;
            }
            rest2++;
            if(rest2>maxrest)
            maxrest = rest2;
        }
        cout << max(maxrest, rest);
        return;
    }
    else
    {
        for(int i=0; i<N; i++)
        {
            if(A[i]==0)
            {
                rest=0;
                continue;
            }
            rest++;
            if(rest>maxrest)
            maxrest = rest;
        }
        cout << maxrest;
        return;
    }
}

int32_t main()
{
    Radhe Krishna
    solve();
    return 0;
}