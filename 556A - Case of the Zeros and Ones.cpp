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
    int N, n1=0, n0=0;
    cin >> N;
    string S;
    cin >> S;
    for(int i=0; i<N; i++)
    {
        if(S[i]=='0') n0++;
        else n1++;
    }
    cout << abs(n0-n1);
    return 0;
}