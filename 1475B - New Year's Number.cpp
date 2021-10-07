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

void solve(int N)
{
    if((N%2020==0 || N%2021==0) && N>2020)
    {
        cout << "YES" << endl;
        return;
    }
    while (N>=2020)
    {
        if(N%2020==0)
        {
            cout << "YES" << endl;
            return;
        }
        N-=2021;
    }
    cout << "NO" << endl;
}

int main()
{
    Radhe Krishna
    TEST
    {
        int N;
        cin >> N;
        solve(N);
    }
    return 0;
}