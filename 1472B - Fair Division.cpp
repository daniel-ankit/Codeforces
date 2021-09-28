#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    TEST
    {
        int N, n1=0, n2=0;
        cin >> N;
        int A[N];
        for(int i=0; i<N; i++)
        {
            cin >> A[i];
            if(A[i]==1) n1++;
            else n2++;
        }
        if(n1==1 && n2==1)
        cout << "NO"<< endl;
        else if((max(n1, n2)- min(n1, n2)%2==0)||(n1%2==0 && n2%2==0)||(n1%2==0 && n2==0)||(n2%2==0 && n1==0))
            cout << "YES" << endl;
        else cout << "NO"<< endl;
    }
    return 0;
}