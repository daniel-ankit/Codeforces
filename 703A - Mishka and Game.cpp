#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, nM=0, nC=0;
    cin >> N;
    while(N--)
    {
        int M, C;
        cin >> M >> C;
        if(M>C) nM++;
        else if(M<C) nC++;
    }
    if(nM>nC) cout << "Mishka";
    else if(nM<nC) cout << "Chris";
    else cout << "Friendship is magic!^^";
    cout << endl;
    return 0;
}