#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int Array[N];
    for(int i=0; i<N; i++)
        cin >>Array[i];
    sort(Array, Array+N);
    for(int i=0; i<N; i++)
        cout << Array[i] << " ";
    return 0;
}