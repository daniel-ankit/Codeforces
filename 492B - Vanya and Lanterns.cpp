#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;
    double Array[N];
    double diff[N-1];
    for(int i=0; i<N; i++)
        cin >> Array[i];
    sort(Array, Array+N);
    for(int i=0; i<N-1; i++)
        diff[i] = (Array[i+1]-Array[i])/2;
    double rad = max(Array[0], max(L-Array[N-1], *(max_element(diff, diff+N-1))));
    printf("%0.6f", rad);
    return 0;
}

