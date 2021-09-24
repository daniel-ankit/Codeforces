#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string A, B, C, C1;
    cin >> A >> B >> C;
    C1=A+B;
    sort(C1.begin(), C1.end());
    sort(C.begin(), C.end());
    if (C1==C) cout << "YES";
    else cout << "NO";
    return 0;
}