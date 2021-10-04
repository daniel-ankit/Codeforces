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
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if(max(A, B)<min(C, D) || max(C, D)<min(A, B))
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}