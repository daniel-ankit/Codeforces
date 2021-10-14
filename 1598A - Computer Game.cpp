#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<string>
#include<algorithm>
#include<bitset>
#include<cstdlib>
#include<stack>
#include<queue>
#include<iomanip>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
#define PB push_back
#define PP pop_back
#define MP make_pair
#define MOD(n) n%1000000007
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

void solve()
{
    int N;
    cin >> N;
    string S1, S2;
    cin >> S1 >> S2;
    for(int i=0; i<N; i++)
    {
        if(S1[i]=='1' && S2[i]=='1')
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    Radhe Krishna
    TEST
    solve();
    return 0;
}