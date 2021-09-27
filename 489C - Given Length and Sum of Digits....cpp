#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int D, S;
    vector<int> V1, V2;
    cin >> D >> S;
    if (S < 1 && D > 1 || S > D * 9) {cout << "-1 -1"; return 0;}
    if(S==0) {cout << "0 0"; return 0;}
    int A[D] = {0};
    for (int i = 0; S > 0; i++)
    {
        A[i] = min(9, S);
        S = S - min(9, S);
    }
    for (int i = 0; i < D; i++)
        V2.push_back(A[i]);
    if (A[D - 1] == 0)
    {
        for (int i = D - 1; i >= 0; i--)
        {
            if (A[i] > 0)
            {
                A[i]--;
                break;
            }
        }
        A[D - 1] = 1;
    }
    for (int i = D - 1; i >= 0; i--)
        V1.push_back(A[i]);
    for (auto X : V1)
        cout << X;
    cout << " ";
    for (auto X : V2)
        cout << X;
    return 0;
}