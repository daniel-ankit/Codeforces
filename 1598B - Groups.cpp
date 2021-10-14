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
    long long int N;
    cin >> N;
    long long int A[N][5];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            cin >> A[i][j];
    }
    bool possible = false;
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5; j++)
        {
        int d1=0, d2=0, both=0;
            for(int k=0; k<N; k++)
            {
                if(A[k][i]==1 && A[k][j]==1) both++;
                else if(A[k][i]==1) d1++;
                else if(A[k][j]==1) d2++;
            }
            int first = N/2 - d1, second = N/2 - d2;
            if(first>=0 && second>=0 && both == first+second)
            {
                cout << "YES" << endl;
                return;
            }
        }  
    }
    cout << "NO" << endl;
}

int main()
{
    Radhe Krishna
    TEST
    solve();
    return 0;
}