#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, D, count=0;
    cin >> N >> D;
    int H[N];
    for(int i=0; i<N; i++)
        cin >> H[i];
    sort(H, H+N);
    for(int i=0; i<N-1; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(H[j]-H[i]<=D)
                count++;
        }
    }
    cout << count*2<< endl;
    return 0;
}