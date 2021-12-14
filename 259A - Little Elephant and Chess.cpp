#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S[8];
    for(int i=0; i<8; i++)
        cin >> S[i];
    for(int i=0; i<8; i++)
    {
        if(S[i]=="WBWBWBWB" || S[i]=="BWBWBWBW") continue;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}