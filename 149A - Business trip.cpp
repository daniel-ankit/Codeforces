#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int
#define PB push_back
#define PP pop_back
#define MP make_pair
#define SHOWVEC(V) for(auto X: V) cout << X << " ";
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);
#define SORT(SEQUENCE) sort(SEQUENCE.begin(), SEQUENCE.end());

int main()
{
    Radhe Krishna
    int N, num;
    cin >> N;
    vector <int> V;
    for(int i=0; i<12; i++)
    {
        cin >> num;
        V.PB(num);
    }
    if (N==0) cout << 0;
    else if(N>accumulate(V.begin(), V.end(), 0)) cout << -1 << endl;
    else
    {
        sort(V.begin(), V.end());
        reverse(V.begin(), V.end());
        int i=0;
        num=0;
        for(i=0; i<12; i++)
        {
            num+=V[i];
            if(num>=N) break;
        }
        cout << i+1;
    }
    return 0;
}