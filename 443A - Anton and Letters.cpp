#include<iostream>
using namespace std;

int main()
{
    string S2;
    char S[1000];
    cin.getline(S, 1000);
    int N = 0, i=0;
    while(S[i]!='\0')
    {
        N++;
        i++;
    }
    if(N==2)
    cout << "0";
    else if(N==3)
    cout <<"1";
    else
    {
        for(int i=0;i<N;i++)
        {
            if(S[i]>='a' && S[i]<='z')
            S2[i]=S[i];
        }
        cout << S2<< endl;
        int N=S2.length();
        for(int i=0; i<N; i++)
        {
            for(int j=i; j<N;j++)
            {
                if(S[i]==S[j])
                N--;
            }
        }
        cout << N+1;
    }
    return 0;
}