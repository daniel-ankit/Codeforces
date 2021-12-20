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
#define PP pop_back()
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
    TEST
    {
        string A, S;
        cin >> A >> S;
        int len_a = A.length()-1, len_s = S.length();
        int idx_a = len_a - 1, idx_s = len_s - 1;
        string B;
        bool done = true;
        while(idx_a >= 0 and idx_s >= 0)
        {
            int val_a = A[idx_a] - '0',  val_s = S[idx_s] - '0';
            if(val_a <= val_s)
            {
                int diff = val_s - val_a;
                B.PB('0'+diff);
                idx_a--, idx_s--;
            }
            else
            {
                idx_s--;
                val_s += (10 * (S[idx_s]-'0'));
                int diff = val_s - val_a;
                if(diff > 9 or diff < 0)
                {
                    done = false;
                    break;
                }
                B.PB((char)('0'+diff));
                idx_a--, idx_s--;
            }
        }
        if(!done)
        {
            cout << -1 << endl;
            continue;
        }
        if(idx_a >= 0) done = false;
        if(!done)
        {
            cout << -1 << endl;
            continue;
        }
        while(idx_s >= 0)
            B.PB(S[idx_s--]);
        while(B.back() == '0')
            B.PP;
        REVERSE(B);
        cout << B << endl;
    }
    return 0;
}