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
        if(N%2==0)
            cout << N/2-1<<endl;
        else cout <<N/2 << endl;
    }
    return 0;
}   