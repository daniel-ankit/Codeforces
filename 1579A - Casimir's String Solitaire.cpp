#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)

int main()
{
    TEST
    {
        string S;
        int NA=0, NB=0, NC=0;
        cin >> S;
        for(int i=0; i< S.length(); i++)
        {
            if (S[i]=='A') NA++;
            else if(S[i] == 'B') NB++;
            else NC++;
        }
        if(NA+NC==NB) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
