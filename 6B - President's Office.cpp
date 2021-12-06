/*
─────────────────────────────────────────────────────────────────────
                  कोई अच्छा सा संस्कृति का श्लोक सोच लेना यहां                
                 सब लिख रहे थे तो, मुझे लगा मैंडेटरी होगा लिखना..             
─────────────────────────────────────────────────────────────────────
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
#define VII vector <pair<int, int>>
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VB vector<bool>
#define FF first
#define SS second
#define LONGINT << fixed << setprecision(0)
#define FOR(i, n) for(long long i=0; i<n; i++)
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL); cout.tie(NULL);
#define VIN(X, N) for(int i=0; i<N; i++){int V; cin >> V; H.push_back(V);};
#define VOUT(x,X) for(auto x:X) cout << x << " ";
#define SORT(V) sort(V.begin(), V.end())
#define REVERSE(V) reverse(V.begin(), V.end())
#define ADD(V) accumulate(V.begin(), V.end(), 0)
#define PI 3.1415926535897932384626433832795

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
int maxfreqof(vector<int>& nums) { int count=0, ans=0; for(int n:nums) { if(count==0) ans = n; (n==ans) ? (count++) : (count--); } return ans; }
int MEX(set <int> V){ set<int> :: iterator j; int i=0; for (j=V.begin(); j!=V.end(); j++, i++) if(*j!=i) return i; return *(V.end())+1; }
int maxfreq(vector<int> V) { int C=1, MAX=0; SORT(V); int pivot = V[0]; for(int i=1; i<V.size(); i++) { if(V[i]!=pivot) { pivot = V[i]; C=0; } C++; MAX = max(MAX, C); } return MAX; }

int32_t main()
{
    Radhe Krishna
    int N, M;
    char P;
    cin >> N >> M >> P;
    char A[N+2][M+2];
    for(int i=0; i<M+2; i++)
    {
        A[0][i]='.';
        A[N+1][i]='.';
    }
    for(int i=1; i<N+2; i++)
    {
        A[i][0]='.';
        A[i][M+1]='.';
    }
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=M; j++)
        cin >> A[i][j];
    }
    set <char> S;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=M; j++)
        {
            if(A[i][j]==P)
            {
                S.insert(A[i-1][j]);
                S.insert(A[i+1][j]);
                S.insert(A[i][j+1]);
                S.insert(A[i][j-1]);
            }
        }
    }
    S.erase('.');
    S.erase(P);
    cout << S.size();
    return 0;
}