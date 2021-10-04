#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    if(N%4==0) cout << N/2 << " " << N/2;
    else if(N%2==0 && N%4!=0) cout << 8 << " " << N-8;
    else cout << 9 << " " << N-9;
    return 0;
}