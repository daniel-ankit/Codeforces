#include <iostream>
#include <bits/stdc++.h>
#define TEST int T; cin >> T; while (T--)
using namespace std;

int main()
{
    TEST
    {
        int N, S, pos=0;
        cin >> N >> S;
        pos = (N+1)/2;
        cout << S/(N-pos+1) << endl;
    }
    return 0;
}