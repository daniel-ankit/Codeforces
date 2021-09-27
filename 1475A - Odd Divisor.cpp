#include<iostream>
#include<bits/stdc++.h>
#include<bitset>
using namespace std;
#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    TEST
    {
        LL N;
        cin >> N;
        bitset<64> ar = N;
        if(ar.count()==1)
        cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}