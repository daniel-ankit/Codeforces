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
        int A, B, C, count=0, sum=0;
        cin >> A>> B>> C;
        while(C>=max(A,B))
        {
            (A>B)?(B+=A):(A+=B);
            count++;
        }
        cout << count << endl;
    }
    return 0;
}