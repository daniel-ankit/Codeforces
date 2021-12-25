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
#define VIN(V, N) for(int i=0; i<N; i++) cin >> V[i];
#define VOUT(V) for(auto x:V) cout << x << " ";
#define SORT(V) sort(V.begin(), V.end())
#define SORTD(V) sort(V.begin(), V.end(), greater<int>())
#define REVERSE(V) reverse(V.begin(), V.end())
#define ADD(V) accumulate(V.begin(), V.end(), 0)
#define PI 3.1415926535897932384626433832795
#define endl "\n"
#define OLD freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
int maxfreqof(vector<int>& nums) { int count=0, ans=0; for(int n:nums) { if(count==0) ans = n; (n==ans) ? (count++) : (count--); } return ans; }
int MEX(set <int> V){ set<int> :: iterator j; int i=0; for (j=V.begin(); j!=V.end(); j++, i++) if(*j!=i) return i; return *(V.end())+1; }
int maxfreq(vector<int> V) { int C=1, MAX=0; SORT(V); int pivot = V[0]; for(int i=1; i<V.size(); i++) { if(V[i]!=pivot) { pivot = V[i]; C=0; } C++; MAX = max(MAX, C); } return MAX; }

int32_t main()
{
    Radhe Krishna
    int N, n1=0, n2=0, n3=0;
    cin >> N;
    VI A(N);
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
        if(A[i]==1) n1++;
        if(A[i]==2) n2++;
        if(A[i]==3) n3++;
    }
    int MAX = max(n1, max(n2, n3));
    if(MAX==n1) cout << n2+n3;
    else if(MAX==n2) cout << n1+n3;
    else cout << n1+n2;
    return 0;
}