#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A>> B>> C;
    cout <<max(A, max(B, C))- min(A, min(B, C));
    return 0;
}