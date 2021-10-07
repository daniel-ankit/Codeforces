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

void solve()
{
    string H;
    string T[5];
    cin >> H;
    for(int i=0; i<5; i++)
    {
        cin >> T[i];
        if(T[i][0]==H[0] || T[i][1]==H[1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    Radhe Krishna
    solve();
    return 0;
}