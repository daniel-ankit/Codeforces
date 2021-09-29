#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL N, T;
    cin >> N >>T;
    if(N==1 && T>=10)
    cout << -1;
    else if(T<10)
    {
        for(int i=0; i<N; i++)
            cout << T;
    }
    else if(T==10)
    {
        for(int i=0; i<N-1; i++)
            cout << 1;
        cout << 0;
    }
    else
    {
    LL NUM = pow(10, N-1);
    while(NUM%T!=0)
        NUM++;
    cout << NUM;
    }
    return 0;
}