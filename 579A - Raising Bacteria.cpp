#include<iostream>
#include<bits/stdc++.h>
#include<bitset>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

void solve (int n)
{
    vector <int> V;
    int i = 0, count=0;
    while (n > 0)
    {
        V.push_back(n%2);
        n/=2;
        i++;
    }
    for(auto X:V)
    {
        if(X==1)
        count++;
    }
    cout << count;
}

int main()
{
    int N, count=0;
    cin >> N;
    solve(N);
    bitset<64> ar = N;
    cout << ar.count() << endl;
    return 0;
}

/*
int main()
{
    int N, count=0;
    cin >> N;
    bitset<64> ar = N;
    cout << ar.count() << endl;
    return 0;
}
*/