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
    int N, num=0;
    cin >> N;
    deque <int> Q;
    for(int i=0; i<N;i++)
    {
        cin >> num;
        Q.push_back(num);
    }
    for(int i=0; i<N/2; i++)
    {
        cout << Q.front() << " " << Q.back() << " ";
        Q.pop_back();
        Q.pop_front();
    }
    if(!Q.empty()) cout << Q.front();
    cout << endl;
    }
    return 0;
}