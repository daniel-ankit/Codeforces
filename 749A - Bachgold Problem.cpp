#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    int N;
    cin >> N;
    cout << N/2 << endl;
    if(N%2==0)
    {
        for(int i=0; i<N/2; i++)
        cout << "2 "; 
    }
    else
    {
        for(int i=0; i<N/2-1; i++)
        cout << "2 "; 
        cout<<"3";
    }
    return 0;
}