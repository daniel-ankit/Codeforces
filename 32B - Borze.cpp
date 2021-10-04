#include<bits/stdc++.h>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define LL long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S;
    vector <int> A;
    int count=0;
    cin >> S;
    for(int i=0, j=0; i<S.length(); i++, j++)
    {
        if(S[i]=='-' && S[i+1]=='-')
        {
            A.push_back(2);
            i++;
        }
        else if(S[i]=='-' && S[i+1]=='.')
        {
            A.push_back(1);
            i++;
        }
        else A.push_back(0);
        count++;
    }
    for(int j=0; j<count; j++)
        cout << A[j];
    return 0;
}