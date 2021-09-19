#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N>> M;
    string S, res;
    cin >> S;
    res=S;
    while (M--)
    {
        for (int i = 0; i < N - 1; i++)
        {
            if (S[i] == 'B' && S[i + 1] == 'G')
            {
                res[i] = S[i+1];
                res[i+1] = S[i];
            } 
        }
        S=res;
    }
    cout << res;
    return 0;
}
