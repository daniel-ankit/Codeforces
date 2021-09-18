#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        string S;
        cin >>S;
        for(int i=0; i<N; i++)
        {
            if(S[i]=='U')
            S[i]='D';
            else if(S[i]=='D')
            S[i]='U';
        }
        cout << S;
    }
    return 0;
}