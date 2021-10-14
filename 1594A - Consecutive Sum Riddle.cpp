#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
#define PB push_back
#define PP pop_back
#define MP make_pair
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);
#define SORT(SEQUENCE) sort(SEQUENCE.begin(), SEQUENCE.end());

int main()
{
    Radhe Krishna
    TEST
    {
        LL N;
        cin >> N;
        if(N>0)
        cout << -N+1 << " " << N << endl;
        else cout << N << " " << abs(N+1) << endl;
    }
    return 0;
}