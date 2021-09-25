#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

int main()
{
    int N, req=0, sum=0;
    cin >> N;
    int Array[N];
    for(int i=0; i<N; i++)
    cin >> Array[i];
    sort(Array, Array+N);
    req = Array[N-1];
    sum = accumulate(Array, Array+N, sum);
    cout << (req*N)-sum;
    return 0;
}