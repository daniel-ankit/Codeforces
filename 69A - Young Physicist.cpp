#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], y[n], z[n], X = 0, Y = 0, Z = 0;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i] >> z[i];
    X = accumulate(x, x + n, X);
    Y = accumulate(y, y + n, Y);
    Z = accumulate(z, z + n, Z);
    if (X == 0 && Y == 0 && Z == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}