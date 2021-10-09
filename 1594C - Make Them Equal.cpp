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

bool allsame(string S, char C)
{
    for(int i=0; i< S.length(); i++)
    {
        if(C!=S[i])
        return false;
    }
    return true;
}

void solve()
{
    int N;
    char O;
    cin >> N >> O;
    string S;
    cin >> S;    
    if(allsame(S, O))
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        for(int i=N/2; i<N; i++)
        {
            if(S[i]==O)
            {
            cout << 1 << endl << i+1 << endl;
            return;
            }
        }
    }
    cout << 2 << endl << N-1 << " " << N << endl;
}

int main()
{
    Radhe Krishna
    TEST
    solve();
    return 0;
}

// abcde | fghijk