#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, num=0, sereja=0, dima=0;
    bool C = true; //Sereja
    cin >> N;
    deque <int> A;
    for(int i=0; i<N;i++)
    {
        cin >> num;
        A.push_back(num);
    }
    while(!A.empty())
    {
        if(A.front() >= A.back())
        {
            num = A.front();
            A.pop_front();
        }
        else
        {
            num = A.back();
            A.pop_back();
        }
        if(C)
            sereja+=num;
        else dima+=num;
        C=(!C);
    }
    cout << sereja << " " << dima;
    return 0;
}