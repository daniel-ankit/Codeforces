#include<iostream>
using namespace std;

int main()
{
    short int N, count=0;
    cin >> N;
    string S;
    cin >> S;
    for(int i=0; i<N-1; i++)
    {
        if(S[i]==S[i+1])
        count++;
    }
    cout <<count;
    return 0;
}