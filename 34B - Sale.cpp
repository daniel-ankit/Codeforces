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
    int N, C, num=0;
    cin >> N >>C;
    vector <int> V;
    for(int i=0; i<N; i++)
    {
        cin >> num;
        V.PB(num);
    }
    sort(V.begin(), V.end());
    num=0;
    for(int i=0; i<C; i++)
        if(V[i]<=0) num+=abs(V[i]);
    cout << num << endl;
    return 0;
}