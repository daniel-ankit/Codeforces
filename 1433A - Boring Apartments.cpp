#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

void solve()
{
    int N, total = 0;
    cin >> N;
    for (int i = 1; i <= 9; i++)
    {
        int room = 0;
        for (int j = 1; j <= 4; j++)
        {
            room = room * 10 + i;
            total += j;
            if (room == N)
            {
                cout << total << endl;
                return;
            }
        }
    }
}

int main()
{
    TEST
    solve();
    return 0;
}