#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
#define PB push_back
#define PP pop_back
#define MP make_pair
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);
#define SORT(SEQUENCE) sort(SEQUENCE.begin(), SEQUENCE.end());

int main()
{
    Radhe Krishna
    TEST
    {
        int n0=0, n1=0;
        string S;
        cin >> S;
        for(int i=0; i<S.length(); i++)
        {
            if(S[i]=='1') n1++;
            else n0++;
        }
        if(n1==S.length() || n0==S.length()) cout << "NET";
        else if(min(n0, n1)%2==0) cout << "NET";
        else cout<< "DA";
        cout << endl;
    }
    return 0;
}