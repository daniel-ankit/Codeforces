#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        bool flag=1;
        cin >> N;
        string A;
        cin >> A;
        vector <char> V;
        V.push_back(A[0]);
        for(int i=0; i< N-1; i++)
        {
            if(A[i] != A[i+1])
            V.push_back(A[i+1]);
        }
        sort(V.begin(), V.end());
        for(int i=0; i<V.size()-1; i++)
        {
            if(V[i]==V[i+1])
            flag = false;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}