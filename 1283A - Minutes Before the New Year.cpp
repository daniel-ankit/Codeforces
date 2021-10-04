#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TEST
    {
        int H, M;
        cin >> H >> M;
        cout << 1440-(H*60)-M << endl;
    }
    return 0;
}