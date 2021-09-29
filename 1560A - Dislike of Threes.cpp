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
        int n;
        cin >> n;
        for(int i=1; ; i++)
        {
            if(i%3==0 || i%10==3)
                continue;
            if(--n==0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}