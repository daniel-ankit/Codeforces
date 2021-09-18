#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, Q;
        cin >> A >> B;
        if (A % B == 0)
            cout << "0" << endl;
        else
        {
            Q = (A / B);
            Q++;
            cout << (Q*B) - A << endl;
        }
    }
    return 0;
}