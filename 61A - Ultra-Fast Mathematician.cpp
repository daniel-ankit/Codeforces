#include<iostream>
using namespace std;
 
int main()
{
    string N, M;
    cin >> N >>M;
    for(int i=0; i<N.length(); i++)
    {
        if(N[i]==M[i])
            N[i]='0';
        else N[i]='1';
    }
    cout << N;
    return 0;
}