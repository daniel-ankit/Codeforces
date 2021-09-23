#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        for (int u = 1; u <= N; u++)
        {
            ll x = N, y = N;
            while (x > 0)
            {
                for (int i = 1; i <= u && x > 0; i++)
                {
                    cout << "(";
                    x--;
                }
                cout << ")";
                y--;
            }
            for (int j = 1; j <= y; j++)
                cout << ")";
            cout << endl;
        }
    }
    return 0;
}