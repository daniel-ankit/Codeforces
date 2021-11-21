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
    TEST
    {
        int N, num=0, n1=0, n2=0;
        cin >> N;
        FOR(i, N)
        {
            cin >> num;
            (num==1) ? (n1++) : (n2++);
        }
        if(n2%2==0 && n1%2==0)
        cout << "YES";
        else if(n2%2!=0 && n1%2==0 && n1>=2)
        cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}