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
    int A, B;
    cin >> A >> B;
    if(A==B) cout << 0;
    else if(A>B)
    {
        if((A-B)%2==0) cout << 1;
        else cout << 2;
    }
    else
    {
        if((B-A)%2==0) cout << 2;
        else cout << 1;
    }
    cout << endl;
    }
    return 0;
}