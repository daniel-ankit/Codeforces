#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int N[6];
    N[0] = A+B*C;
    N[1] = A*(B+C);
    N[2] = A*B*C;
    N[3] = (A+B)*C;
    N[4] = A+B+C;
    N[5] = A*B+C;
    cout << *max_element(N, N+6);
    return 0;
}