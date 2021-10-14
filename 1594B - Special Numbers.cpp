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
#define SORT(SEQUENCE) sort(SEQUENCE.begin(), SEQUENCE.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int main()
{
    Radhe Krishna
    TEST
    {
        unsigned LL N, K, A=0, i=1;
        cin >> N >> K;
        while(K>0)
        {
            if(K%2==1)
            A = MOD(A+i);
            K/=2;
            i=MOD(i*N);
        }
        cout << MOD(A) << endl;
    }
    return 0;
}