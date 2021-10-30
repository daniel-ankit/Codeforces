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
#define VIN(x,X) for(auto &x:X) cin >> x; 
#define VOUT(x,X) for(auto x:X) cout << x << " ";
#define SORT(V) sort(V.begin(), V.end())
#define REVERSE(V) reverse(V.begin(), V.end())
#define ADD(V) accumulate(V.begin(), V.end(), 0)
#define PI 3.1415926535897932384626433832795

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
int maxfreqof(vector<int> V) { int res = 0, count = 1, n=V.size(); for(int i = 1; i < n; i++) { if(V[i] == V[res]) count++; else count--; if(count == 0) { res = i; count = 1; } } return V[res]; }
int maxfreq(vector<int> V) { int C=1, MAX=0; SORT(V); int pivot = V[0]; for(int i=1; i<V.size(); i++) { if(V[i]!=pivot) { pivot = V[i]; C=0; } C++; MAX = max(MAX, C); } return MAX; }

int32_t main()
{
    Radhe Krishna
    int N, M;
    cin >> N >> M;
    int A[N][M], B[N][M];
    vector <pair<int, int>> ANS;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
            cin >> A[i][j];
    }
    memset(B, 0, sizeof(B));
    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<M-1; j++)
        {
            if(A[i][j]==1 && A[i][j+1]==1 && A[i+1][j]==1 && A[i+1][j+1]==1)
            {
                ANS.PB(MP(i+1, j+1));
                B[i][j]=1;
                B[i][j+1]=1;
                B[i+1][j]=1;
                B[i+1][j+1]=1;
            }

        }
    }
    bool pass = true;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(A[i][j]!=B[i][j])
            {
                pass=false;
                break;
            }
        }
    }
    if(!pass)
    cout << -1 << endl;
    else
    {
        cout << ANS.size() << endl;
        for(auto x : ANS)
            cout << x.FF << " " << x.SS << endl;
    }
    return 0;
}
