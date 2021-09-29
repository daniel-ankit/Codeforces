#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

void solve()
{
    int A[23] = {60, 90, 108, 120, 135, 140, 144, 150, 156, 160, 162, 165, 168, 170, 171, 172, 174, 175, 176, 177, 178, 179, 180};
    int Angle;
    cin >> Angle;
    for(int i=0; i<=22; i++)
    {
        if(Angle==A[i])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    TEST
    solve();
    return 0;
}