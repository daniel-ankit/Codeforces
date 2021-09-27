#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    TEST
    {
    LL N, count = 0;
    cin >> N;
    while (N > 1)
    {
        (N % 6 == 0)?(N /= 6):(N*=2);
        count++;
    }
    (N==1)?(cout << count << endl): (cout << "-1" << endl);
    }
    return 0;
}