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

int32_t main()
{
    Radhe Krishna
    int W=0, B=0;
    string S[8];
    for(int i=0; i<8; i++)
        cin >> S[i];
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(S[i][j]=='Q') W+=9;
            else if(S[i][j]=='R') W+=5;
            else if(S[i][j]=='B' || S[i][j]=='N') W+=3;
            else if(S[i][j]=='P') W+=1;
        }
        for(int j=0; j<8; j++)
        {
            if(S[i][j]=='q') B+=9;
            else if(S[i][j]=='r') B+=5;
            else if(S[i][j]=='b' || S[i][j]=='n') B+=3;
            else if(S[i][j]=='p') B+=1;
        }
    }
    if(W>B) cout << "White";
    else if(W<B) cout << "Black";
    else cout << "Draw";
    cout << endl;
    return 0;
}