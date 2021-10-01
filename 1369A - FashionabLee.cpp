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
        int N;
        cin >> N;
        if(N%4==0) cout << "YES";
        else cout <<"NO";
        cout << endl;
    }
    return 0;
}