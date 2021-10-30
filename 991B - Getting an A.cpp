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
#define VIN(x,X) for(auto &x:X) cin >> x; 
#define VOUT(x,X) for(auto x:X) cout << x << " ";
#define SORT(V) sort(V.begin(), V.end())
#define REVERSE(V) reverse(V.begin(), V.end())
#define PI 3.1415926535897932384626433832795

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}

int32_t main()
{
    Radhe Krishna
        int N, num=0;
        cin >> N;
        vector <double> A;
        for(int i=0; i<N; i++)
        {
            cin >> num;
            A.PB(num);
        }
        SORT(A);
        double Sumi = accumulate(A.begin(), A.end(), 0);
        double grade = Sumi/N;
        if(grade >= 4.5) cout << 0 << endl;
        else
        {
            num=0;
            for(int i=0; i<N; i++)
            {
                if(grade>=4.5) break;
                num++;
                Sumi = Sumi - A[i]+5;
                grade = Sumi/N;
            }
            cout << num << endl;
        }
    return 0;
}