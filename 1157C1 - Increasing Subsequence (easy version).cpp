/*
┌─────────────────────────────────────────────────────────────────────┐
│                                                                     │
└─────────────────────────────────────────────────────────────────────┘
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
#define PF pop_front
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
    int N, num=0;
    cin >> N;
    deque <int> Q;
    string S="";
    for(int i=0; i<N; i++)
    {
        cin >> num;
        Q.PB(num);
    }

    int C=0;
    if(Q.front()<=Q.back())
    {
        S.PB('L');
        C = Q.front();
        Q.PF();
    }
    else
    {
        S.PB('R');
        C = Q.back();
        Q.PP();
    }
    // int right =Q.back();
    // int left  =Q.front();
    for(int i=0; i<N; i++)
    {
        if(C<Q.back() && C<Q.front())
        {
            if(Q.front()<=Q.back())
            {
                C = Q.front();
                Q.PF();
                S.PB('L');
            }
            else
            {
                C = Q.back();
                Q.PP();
                S.PB('R');
            }
        }
        else if(C<Q.back() && C>Q.front())
        {
            C = Q.back();
            Q.PP();
            S.PB('R');
        }
        else if(C>Q.back() && C<Q.front())
        {
            C = Q.front();
            Q.PF();
            S.PB('L');
        }
        else if((C>Q.front() && C>Q.back()) || Q.empty())
        break;
    }
    cout << S.size() << endl << S;
    return 0;
}