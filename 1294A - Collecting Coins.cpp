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
        int A, B, C, N;
        cin >> A >> B >> C >> N;
        int MAX = max(A, max(B, C));
        int req = 3*MAX-(A+B+C);
        int rem = N-req;
        if(rem%3==0 && rem>=0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}