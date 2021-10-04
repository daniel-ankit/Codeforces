#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TEST
    {
        int N, nO=0, nE=0;
        cin >> N;
        int A[N];
        for(int i=0; i<N; i++)
        {
            cin >> A[i];
            if(A[i]%2==0) nE++;
            else nO++;
        }
        if((N%2==0 && nE==N) || (N%2==0 && nO==N) || (N%2!=0 && nE==N))
            cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}