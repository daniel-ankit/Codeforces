#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        ll a, b, c, m;
        cin >> a>> b>> c>> m;
        ll arr[3]={a, b, c};
        sort(arr, arr+3);
        if(m>a+b+c-3)
            cout <<"NO"<< endl;
        else
        {
            ll k=arr[2]-(arr[0]+arr[1]+1);
            if(m>=k)
                cout <<"YES"<< endl;
            else cout <<"NO"<<endl;
        }
    }
    return 0;
}   

// abcaaaaaaabbbbbbbbbbbbccccccccccc