#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define int long long 

void solve()
{
    int X, Y;
    cin >> X >> Y;
    if((X+Y)%2!=0)
    {
        cout << -1  << " " << -1 << endl;
        return;
    }
    if(X%2==0 && Y%2==0)
    {
        cout <<X/2 << " " << X/2 << endl;
        return;
    }
    cout << X/2 << " " << (Y+1)/2 << endl;
}

int32_t main()
{
    TEST
    solve();
    return 0;
}
