#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int N, M, A, L, B;
    cin >> N >> M >> A;
    if (max(N, M) % A == 0)
        L = max(N, M) / A;
    else
        L = (max(N, M) / A) + 1;
    if (min(N, M) % A == 0)
        B = min(N, M) / A;
    else
        B = (min(N, M) / A) + 1;
    cout << L*B;
    return 0;
}