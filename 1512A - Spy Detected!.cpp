#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    TEST
    {
        int N, num;
        cin >> N;
        vector <int> V1, V2;
        for(int i=0; i< N;i++)
        {
            cin >> num;
            V1.push_back(num);
            V2.push_back(num);
        }
        sort(V2.begin(), V2.end());
        if(V2[0]==V2[1]) num=V2[N-1];
        else num = V2[0];
        for(int i=0; i<N; i++)
            if(V1[i]==num) cout << i+1 << endl;
    }
    return 0;
}