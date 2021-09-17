#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, off = 0, in = 0;
    cin >> n;
    int Array[n];
    cin >> off >> in;
    Array[0] = in;
    for(int i=1; i<n; i++)
    {
        cin >> off >> in;
        Array[i] = Array[i-1] + in - off;
    }
    cout << *max_element(Array, Array+n);
    return 0;
}