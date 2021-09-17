#include<iostream>
using namespace std;
 
int main()
{
    int N, count=0;
    cin >> N;
    while(N--)
    {
        int P, Q;
        cin >> P >> Q;
        if(P+2<=Q)
            count++;
    }
    cout << count <<endl;
    return 0;
}
